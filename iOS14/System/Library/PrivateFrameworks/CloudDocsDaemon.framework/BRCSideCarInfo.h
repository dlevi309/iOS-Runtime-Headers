/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@class BRFieldCKInfo, NSData;

@interface BRCSideCarInfo : NSObject {

	BRFieldCKInfo* _ckInfo;
	long long _favoriteRank;
	long long _lastUsedTime;
	NSData* _finderTags;

}

@property (nonatomic,retain) BRFieldCKInfo * ckInfo;              //@synthesize ckInfo=_ckInfo - In the implementation block
@property (assign,nonatomic) long long lastUsedTime;              //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (assign,nonatomic) long long favoriteRank;              //@synthesize favoriteRank=_favoriteRank - In the implementation block
@property (nonatomic,retain) NSData * finderTags;                 //@synthesize finderTags=_finderTags - In the implementation block
-(id)debugDescription;
-(long long)lastUsedTime;
-(BRFieldCKInfo *)ckInfo;
-(id)description;
-(void)setFavoriteRank:(long long)arg1 ;
-(long long)favoriteRank;
-(void)setLastUsedTime:(long long)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)hasfieldsToSync;
-(void)setCkInfo:(BRFieldCKInfo *)arg1 ;
-(NSData *)finderTags;
-(void)setFinderTags:(NSData *)arg1 ;
@end

