/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@interface HUGarageDoorStateTransition : NSObject {

	BOOL _fromOpenState;
	BOOL _toOpenState;

}

@property (assign,nonatomic) BOOL fromOpenState;              //@synthesize fromOpenState=_fromOpenState - In the implementation block
@property (assign,nonatomic) BOOL toOpenState;                //@synthesize toOpenState=_toOpenState - In the implementation block
+(id)transitionFromState:(BOOL)arg1 toState:(BOOL)arg2 ;
-(void)setFromOpenState:(BOOL)arg1 ;
-(void)setToOpenState:(BOOL)arg1 ;
-(BOOL)fromOpenState;
-(BOOL)toOpenState;
@end

