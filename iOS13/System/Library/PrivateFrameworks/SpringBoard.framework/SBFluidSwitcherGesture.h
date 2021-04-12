/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBAppLayout, UIGestureRecognizer, NSString;

@interface SBFluidSwitcherGesture : NSObject <BSDescriptionProviding> {

	/*^block*/id _eventProvider;
	long long _state;
	SBAppLayout* _selectedAppLayout;
	UIGestureRecognizer* _gestureRecognizerForStudyLog;
	long long _type;

}

@property (assign,setter=_setState:,nonatomic) long long state;                                                                        //@synthesize state=_state - In the implementation block
@property (setter=_setSelectedAppLayout:,nonatomic,retain) SBAppLayout * selectedAppLayout;                                            //@synthesize selectedAppLayout=_selectedAppLayout - In the implementation block
@property (setter=_setGestureRecognizerForStudyLog:,nonatomic,retain) UIGestureRecognizer * gestureRecognizerForStudyLog;              //@synthesize gestureRecognizerForStudyLog=_gestureRecognizerForStudyLog - In the implementation block
@property (nonatomic,readonly) long long type;                                                                                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(long long)type;
-(long long)state;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_setState:(long long)arg1 ;
-(SBAppLayout *)selectedAppLayout;
-(id)gestureEvent;
-(id)studyLogData;
-(id)initWithType:(long long)arg1 eventProvider:(/*^block*/id)arg2 ;
-(void)_setSelectedAppLayout:(id)arg1 ;
-(void)_setGestureRecognizerForStudyLog:(id)arg1 ;
-(UIGestureRecognizer *)gestureRecognizerForStudyLog;
@end

