/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_os_transaction;
@class NSObject, NSString;

@interface WLKTransactionScope : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSString* _identifier;
	double _delay;

}

@property (readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) double delay;                                          //@synthesize delay=_delay - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(double)delay;
-(id)initWithIdentifier:(id)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(id)initWithIdentifier:(id)arg1 delay:(double)arg2 ;
@end

