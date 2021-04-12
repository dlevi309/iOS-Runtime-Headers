/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/


@protocol BBAssertionDelegate;
@class NSString;

@interface BBAssertion : NSObject {

	NSString* _identifier;
	unsigned long long _transactionID;
	id<BBAssertionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BBAssertionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<BBAssertionDelegate>)delegate;
-(void)setDelegate:(id<BBAssertionDelegate>)arg1 ;
-(id)identifier;
-(unsigned long long)transactionID;
-(id)initWithDelegate:(id)arg1 identifier:(id)arg2 ;
-(void)increaseOrIgnoreTransactionID:(unsigned long long)arg1 ;
@end

