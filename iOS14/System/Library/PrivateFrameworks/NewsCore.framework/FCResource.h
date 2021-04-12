/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSString, FCAssetHandle, NTPBResourceRecord, FCInterestToken, NSURL;

@interface FCResource : NSObject {

	NSString* _resourceID;
	FCAssetHandle* _assetHandle;
	NTPBResourceRecord* _resourceRecord;
	FCInterestToken* _interestToken;

}

@property (nonatomic,retain) NTPBResourceRecord * resourceRecord;              //@synthesize resourceRecord=_resourceRecord - In the implementation block
@property (nonatomic,retain) FCInterestToken * interestToken;                  //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,readonly) NSString * resourceID;                          //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * assetHandle;                    //@synthesize assetHandle=_assetHandle - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL; 
@property (getter=isOnDisk,nonatomic,readonly) BOOL onDisk; 
-(void)setInterestToken:(FCInterestToken *)arg1 ;
-(BOOL)isOnDisk;
-(NTPBResourceRecord *)resourceRecord;
-(FCInterestToken *)interestToken;
-(void)setResourceRecord:(NTPBResourceRecord *)arg1 ;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 assetManager:(id)arg3 ;
-(NSURL *)fileURL;
-(NSString *)resourceID;
-(id)initWithResourceID:(id)arg1 assetHandle:(id)arg2 ;
-(unsigned long long)hash;
-(FCAssetHandle *)assetHandle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPermanentURLForResourceID:(id)arg1 cacheLifetimeHint:(long long)arg2 contentContext:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

