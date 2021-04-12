/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)fromProcessIdentifier;
-(void)setFromProcessIdentifier:(int)arg1 ;
-(BKSHIDEventDeferringToken *)fromToken;
-(void)setFromToken:(BKSHIDEventDeferringToken *)arg1 ;
-(int)toProcessIdentifier;
-(void)setToProcessIdentifier:(int)arg1 ;
-(BKSHIDEventDeferringToken *)toToken;
-(void)setToToken:(BKSHIDEventDeferringToken *)arg1 ;
@end

