/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXViewportChangeListener.h>

@protocol SXMediaPlaybackDelegate;
@class SXViewport, NSString;

@interface SXMediaPlaybackController : NSObject <SXViewportChangeListener> {

	id<SXMediaPlaybackDelegate> _mediaPlaybackDelegate;
	SXViewport* _viewport;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2 ;
@end

