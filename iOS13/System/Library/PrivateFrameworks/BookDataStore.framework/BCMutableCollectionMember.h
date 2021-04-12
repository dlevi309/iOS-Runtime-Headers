/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)recordType;
-(id)zoneName;
-(id)initWithRecord:(id)arg1 ;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(id)initWithCloudData:(id)arg1 ;
-(id)configuredRecordFromAttributes;
-(id)initWithCollectionMemberID:(id)arg1 ;
-(NSString *)collectionMemberID;
-(void)setCollectionMemberID:(NSString *)arg1 ;
@end
