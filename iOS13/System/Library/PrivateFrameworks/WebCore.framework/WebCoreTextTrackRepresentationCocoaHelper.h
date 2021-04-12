/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(TextTrackRepresentationCocoa*)parent;
-(id)initWithParent:(TextTrackRepresentationCocoa*)arg1 ;
-(void)setParent:(TextTrackRepresentationCocoa*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
@end

