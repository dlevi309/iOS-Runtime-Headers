/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIResponder;

@interface _UITouchForwardingRecipient : NSObject {

	UIResponder* fromResponder;
	UIResponder* responder;
	long long recordedPhase;
	long long autocompletedPhase;

}

@property (assign,nonatomic,__weak) UIResponder * fromResponder; 
@property (assign,nonatomic,__weak) UIResponder * responder; 
@property (assign,nonatomic) long long recordedPhase; 
@property (assign,nonatomic) long long autocompletedPhase; 
-(id)description;
-(UIResponder *)responder;
-(void)setResponder:(UIResponder *)arg1 ;
-(long long)recordedPhase;
-(long long)autocompletedPhase;
-(void)setRecordedPhase:(long long)arg1 ;
-(void)setAutocompletedPhase:(long long)arg1 ;
-(id)initWithResponder:(id)arg1 fromResponder:(id)arg2 ;
-(UIResponder *)fromResponder;
-(void)setFromResponder:(UIResponder *)arg1 ;
@end

