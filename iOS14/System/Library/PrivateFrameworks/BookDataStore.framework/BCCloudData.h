/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/BCCloudData.h>
@class NSDate, CKRecord, NSData;


@protocol BCCloudData <NSObject>
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
@required
-(NSDate *)modificationDate;
-(id)zoneName;
-(id<BCCloudDataPrivacyDelegate>)privacyDelegate;
-(void)setPrivacyDelegate:(id)arg1;
-(id)recordType;
-(id)identifier;
-(BOOL)deletedFlag;
-(void)incrementEditGeneration;
-(long long)editGeneration;
-(long long)syncGeneration;
-(CKRecord *)systemFields;
-(NSData *)ckSystemFields;

@end


@protocol BCCloudDataPrivacyDelegate;
@class NSDate, CKRecord, NSData, NSString;

@interface BCCloudData : NSManagedObject <BCCloudData> {

	id<BCCloudDataPrivacyDelegate> _privacyDelegate;

}

@property (nonatomic,copy) NSString * saltedHashedID; 
@property (assign,nonatomic) BOOL deletedFlag; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (assign,nonatomic) long long editGeneration; 
@property (assign,nonatomic) long long syncGeneration; 
@property (nonatomic,copy) CKRecord * systemFields; 
@property (nonatomic,copy) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate;              //@synthesize privacyDelegate=_privacyDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localIdentifierFromRecord:(id)arg1 ;
+(id)propertyIDKey;
-(id)zoneName;
-(id)mutableCopy;
-(id<BCCloudDataPrivacyDelegate>)privacyDelegate;
-(void)setPrivacyDelegate:(id<BCCloudDataPrivacyDelegate>)arg1 ;
-(id)recordType;
-(id)identifier;
-(void)incrementEditGeneration;
-(CKRecord *)systemFields;
-(BOOL)isEqualExceptForDate:(id)arg1 ;
-(void)configureFromCloudData:(id)arg1 withMergers:(id)arg2 ;
-(void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2 ;
-(id)configuredRecordFromAttributes;
-(void)setSystemFields:(CKRecord *)arg1 ;
@end

