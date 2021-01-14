/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCMutableCloudData.h>
#import <libobjc.A.dylib/BCGlobalMetadatum.h>

@class NSString, NSDate, CKRecord, NSData;

@interface BCMutableGlobalMetadatum : BCMutableCloudData <BCGlobalMetadatum> {

	NSString* _key;
	NSString* _value;

}

@property (nonatomic,copy) NSString * value;                                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                              //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithKey:(id)arg1 ;
-(id)zoneName;
-(id)recordType;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(NSString *)key;
-(id)identifier;
-(NSString *)value;
-(id)initWithCloudData:(id)arg1 ;
-(id)configuredRecordFromAttributes;
@end

