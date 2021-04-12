/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CACViewController.h>

@class NSMutableDictionary;

@interface CACGestureLivePreviewViewController : UIViewController <CACViewController> {

	NSMutableDictionary* _mappedPathEffectViews;

}

@property (nonatomic,retain) NSMutableDictionary * mappedPathEffectViews;              //@synthesize mappedPathEffectViews=_mappedPathEffectViews - In the implementation block
@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
-(long long)zOrder;
-(BOOL)isOverlay;
-(void)viewDidLoad;
-(void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)arg1 forces:(id)arg2 atTime:(double)arg3 ;
-(void)removeTrackingForFingerIdentifier:(id)arg1 ;
-(void)setMappedPathEffectViews:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)mappedPathEffectViews;
-(id)newPathEffectView;
@end

