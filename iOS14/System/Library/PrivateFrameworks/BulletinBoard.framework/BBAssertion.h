/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<BBAssertionDelegate>)delegate;
-(void)setDelegate:(id<BBAssertionDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 identifier:(id)arg2 ;
-(void)increaseOrIgnoreTransactionID:(unsigned long long)arg1 ;
-(id)identifier;
-(unsigned long long)transactionID;
-(void)dealloc;
@end

