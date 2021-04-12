/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCMutableCloudData.h>
#import <libobjc.A.dylib/BCReadingNowDetail.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, CKRecord, NSData;

@interface BCMutableReadingNowDetail : BCMutableCloudData <BCReadingNowDetail, NSSecureCoding> {

	BOOL _isTrackedAsRecent;
	NSString* _assetID;
	NSDate* _lastEngagedDate;

}

@property (nonatomic,copy) NSString * assetID;                                                   //@synthesize assetID=_assetID - In the implementation block
@property (assign,nonatomic) BOOL isTrackedAsRecent;                                             //@synthesize isTrackedAsRecent=_isTrackedAsRecent - In the implementation block
@property (nonatomic,copy) NSDate * lastEngagedDate;                                             //@synthesize lastEngagedDate=_lastEngagedDate - In the implementation block
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
-(NSString *)assetID;
-(void)setAssetID:(NSString *)arg1 ;
-(void)setLastEngagedDate:(NSDate *)arg1 ;
-(NSDate *)lastEngagedDate;
-(id)initWithCloudData:(id)arg1 ;
-(id)configuredRecordFromAttributes;
-(id)initWithAssetID:(id)arg1 ;
-(BOOL)isTrackedAsRecent;
-(void)setIsTrackedAsRecent:(BOOL)arg1 ;
@end

