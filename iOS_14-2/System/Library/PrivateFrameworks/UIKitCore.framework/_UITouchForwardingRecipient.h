/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIResponder;

@interface _UITouchForwardingRecipient : NSObject {

	UIResponder* fromResponder;
	UIResponder* responder;
	long long recordedPhase;
	long long autocompletedPhase;

}

@property (assign,nonatomic,__weak) UIResponder * responder; 
-(void)setResponder:(UIResponder *)arg1 ;
-(UIResponder *)responder;
-(id)description;
@end

