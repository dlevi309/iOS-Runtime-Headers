/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)fileURL;
-(FCAssetHandle *)assetHandle;
-(NSString *)resourceID;
-(id)initWithResourceID:(id)arg1 assetHandle:(id)arg2 ;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 assetManager:(id)arg3 ;
-(id)initWithPermanentURLForResourceID:(id)arg1 cacheLifetimeHint:(long long)arg2 contentContext:(id)arg3 ;
-(BOOL)isOnDisk;
-(NTPBResourceRecord *)resourceRecord;
-(void)setResourceRecord:(NTPBResourceRecord *)arg1 ;
-(FCInterestToken *)interestToken;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
@end

