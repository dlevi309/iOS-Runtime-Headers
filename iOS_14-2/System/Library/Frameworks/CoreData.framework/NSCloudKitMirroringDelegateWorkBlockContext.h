/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSString;

@interface NSCloudKitMirroringDelegateWorkBlockContext : NSObject {

	NSString* _transactionLabel;
	NSString* _powerAssertionLabel;
	id _uiAppInstance;
	unsigned long long _powerAssertionID;

}

@property (nonatomic,readonly) NSString * transactionLabel;                      //@synthesize transactionLabel=_transactionLabel - In the implementation block
@property (nonatomic,readonly) NSString * powerAssertionLabel;                   //@synthesize powerAssertionLabel=_powerAssertionLabel - In the implementation block
@property (nonatomic,readonly) id uiAppInstance;                                 //@synthesize uiAppInstance=_uiAppInstance - In the implementation block
@property (nonatomic,readonly) unsigned long long powerAssertionID;              //@synthesize powerAssertionID=_powerAssertionID - In the implementation block
-(unsigned long long)powerAssertionID;
-(NSString *)transactionLabel;
-(id)initWithTransactionLabel:(id)arg1 powerAssertionLabel:(id)arg2 ;
-(id)uiAppInstance;
-(NSString *)powerAssertionLabel;
-(void)dealloc;
@end

