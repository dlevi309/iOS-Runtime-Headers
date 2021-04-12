/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSString;

@interface WebCoreTextTrackRepresentationCocoaHelper : NSObject <CALayerDelegate> {

	TextTrackRepresentationCocoa* _parent;

}

@property (assign) TextTrackRepresentationCocoa* parent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(TextTrackRepresentationCocoa*)parent;
-(void)setParent:(TextTrackRepresentationCocoa*)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(id)initWithParent:(TextTrackRepresentationCocoa*)arg1 ;
-(void)dealloc;
@end

