/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCMutableCloudData.h>
#import <libobjc.A.dylib/BCAssetAnnotations.h>

@class NSString, NSData, NSDate, CKRecord;

@interface BCMutableAssetAnnotations : BCMutableCloudData <BCAssetAnnotations> {

	NSString* _assetID;
	NSString* _assetVersion;
	NSData* _bookAnnotations;

}

@property (nonatomic,copy) NSString * assetVersion;                                              //@synthesize assetVersion=_assetVersion - In the implementation block
@property (nonatomic,retain) NSData * bookAnnotations;                                           //@synthesize bookAnnotations=_bookAnnotations - In the implementation block
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
@property (nonatomic,copy,readonly) NSString * assetID;                                          //@synthesize assetID=_assetID - In the implementation block
-(NSString *)debugDescription;
-(id)identifier;
-(NSString *)assetVersion;
-(id)recordType;
-(id)zoneName;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)assetID;
-(void)setAssetVersion:(NSString *)arg1 ;
-(id)initWithCloudData:(id)arg1 ;
-(id)configuredRecordFromAttributes;
-(id)initWithAssetID:(id)arg1 ;
-(void)setBookAnnotations:(NSData *)arg1 ;
-(NSData *)bookAnnotations;
@end
