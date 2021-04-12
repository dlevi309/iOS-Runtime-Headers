/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)debugDescription;
-(long long)lastUsedTime;
-(long long)favoriteRank;
-(void)setFavoriteRank:(long long)arg1 ;
-(void)setLastUsedTime:(long long)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(BOOL)hasfieldsToSync;
-(BRFieldCKInfo *)ckInfo;
-(void)setCkInfo:(BRFieldCKInfo *)arg1 ;
-(NSData *)finderTags;
-(void)setFinderTags:(NSData *)arg1 ;
@end

