/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

