/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCMutableCloudData.h>
#import <libobjc.A.dylib/BCCollectionMember.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, CKRecord, NSData;

@interface BCMutableCollectionMember : BCMutableCloudData <BCCollectionMember, NSSecureCoding> {

	int _sortOrder;
	NSString* _collectionMemberID;

}

@property (nonatomic,copy) NSString * collectionMemberID;                                        //@synthesize collectionMemberID=_collectionMemberID - In the implementation block
@property (assign,nonatomic) int sortOrder;                                                      //@synthesize sortOrder=_sortOrder - In the implementation block
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
+(BOOL)supportsSecureCoding;
-(int)sortOrder;
-(id)zoneName;
-(id)recordType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(void)setSortOrder:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)initWithCloudData:(id)arg1 ;
-(id)configuredRecordFromAttributes;
-(id)initWithCollectionMemberID:(id)arg1 ;
-(NSString *)collectionMemberID;
-(void)setCollectionMemberID:(NSString *)arg1 ;
@end

