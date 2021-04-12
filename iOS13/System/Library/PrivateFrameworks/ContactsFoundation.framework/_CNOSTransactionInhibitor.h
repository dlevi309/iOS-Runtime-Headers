/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNInhibitor.h>

@protocol OS_os_transaction;
@class NSString, NSObject;

@interface _CNOSTransactionInhibitor : CNInhibitor {

	NSString* _label;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,copy,readonly) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
-(void)stop;
-(void)start;
-(NSString *)label;
-(NSObject*<OS_os_transaction>)transaction;
-(id)initWithLabel:(id)arg1 ;
@end

