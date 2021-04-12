/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_os_transaction>)transaction;
-(double)delay;
-(id)initWithIdentifier:(id)arg1 delay:(double)arg2 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)dealloc;
@end

