/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface WKAnimationDelegate : NSObject <CAAnimationDelegate> {

	unsigned long long _layerID;
	RemoteLayerTreeHost* _layerTreeHost;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithLayerID:(unsigned long long)arg1 layerTreeHost:(RemoteLayerTreeHost*)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)invalidate;
@end

