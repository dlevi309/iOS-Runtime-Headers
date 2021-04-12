/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)identifier;
-(NSDate *)modificationDate;
-(id)recordType;
-(id)zoneName;
-(id<BCCloudDataPrivacyDelegate>)privacyDelegate;
-(void)setPrivacyDelegate:(id)arg1;
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate;              //@synthesize privacyDelegate=_privacyDelegate - In the implementation block
+(id)localIdentifierFromRecord:(id)arg1 ;
+(id)propertyIDKey;
-(id)mutableCopy;
-(id)identifier;
-(id)recordType;
-(id)zoneName;
-(id<BCCloudDataPrivacyDelegate>)privacyDelegate;
-(void)setPrivacyDelegate:(id<BCCloudDataPrivacyDelegate>)arg1 ;
-(void)incrementEditGeneration;
-(CKRecord *)systemFields;
-(BOOL)isEqualExceptForDate:(id)arg1 ;
-(void)configureFromCloudData:(id)arg1 withMergers:(id)arg2 ;
-(void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2 ;
-(id)configuredRecordFromAttributes;
-(void)setSystemFields:(CKRecord *)arg1 ;
@end

