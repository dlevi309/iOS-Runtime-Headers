/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <BaseBoard/BSSimpleAssertion.h>

@class BKSHIDEventDeferringToken;

@interface SBKeyboardFocusRedirection : BSSimpleAssertion {

	int _fromProcessIdentifier;
	int _toProcessIdentifier;
	BKSHIDEventDeferringToken* _fromToken;
	BKSHIDEventDeferringToken* _toToken;

}

@property (assign,nonatomic) int fromProcessIdentifier;                        //@synthesize fromProcessIdentifier=_fromProcessIdentifier - In the implementation block
@property (nonatomic,copy) BKSHIDEventDeferringToken * fromToken;              //@synthesize fromToken=_fromToken - In the implementation block
@property (assign,nonatomic) int toProcessIdentifier;                          //@synthesize toProcessIdentifier=_toProcessIdentifier - In the implementation block
@property (nonatomic,copy) BKSHIDEventDeferringToken * toToken;                //@synthesize toToken=_toToken - In the implementation block
-(id)description;
-(BKSHIDEventDeferringToken *)toToken;
-(int)fromProcessIdentifier;
-(void)setFromProcessIdentifier:(int)arg1 ;
-(BKSHIDEventDeferringToken *)fromToken;
-(void)setFromToken:(BKSHIDEventDeferringToken *)arg1 ;
-(int)toProcessIdentifier;
-(void)setToProcessIdentifier:(int)arg1 ;
-(void)setToToken:(BKSHIDEventDeferringToken *)arg1 ;
@end

