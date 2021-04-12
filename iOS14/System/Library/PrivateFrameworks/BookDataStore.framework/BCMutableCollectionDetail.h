/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCMutableCloudData.h>
#import <libobjc.A.dylib/BCCollectionDetail.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, CKRecord, NSData;

@interface BCMutableCollectionDetail : BCMutableCloudData <BCCollectionDetail, NSSecureCoding> {

	BOOL _hidden;
	int _sortOrder;
	int _sortMode;
	NSString* _collectionID;
	NSString* _name;
	NSString* _collectionDescription;

}

@property (nonatomic,copy) NSString * collectionID;                                              //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,copy) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * collectionDescription;                                     //@synthesize collectionDescription=_collectionDescription - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                                        //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) int sortOrder;                                                      //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) int sortMode;                                                       //@synthesize sortMode=_sortMode - In the implementation block
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
-(BOOL)hidden;
-(id)zoneName;
-(void)setHidden:(BOOL)arg1 ;
-(id)recordType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)collectionDescription;
-(NSString *)collectionID;
-(NSString *)name;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(void)setSortOrder:(int)arg1 ;
-(void)setCollectionDescription:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCollectionID:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)identifier;
-(id)initWithCloudData:(id)arg1 ;
-(int)sortMode;
-(id)configuredRecordFromAttributes;
-(id)initWithCollectionID:(id)arg1 ;
-(void)setSortMode:(int)arg1 ;
@end

