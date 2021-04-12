/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_os_transaction>)transaction;
-(void)start;
-(id)initWithLabel:(id)arg1 ;
-(void)stop;
-(NSString *)label;
@end

