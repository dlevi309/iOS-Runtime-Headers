/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSString;

@interface AVTStickerFetchRequest : NSObject {

	long long _resultLimit;
	NSString* _avatarIdentifier;
	NSString* _stickerIdentifier;
	long long _criteria;

}

@property (nonatomic,readonly) long long resultLimit;                          //@synthesize resultLimit=_resultLimit - In the implementation block
@property (nonatomic,copy,readonly) NSString * avatarIdentifier;               //@synthesize avatarIdentifier=_avatarIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * stickerIdentifier;              //@synthesize stickerIdentifier=_stickerIdentifier - In the implementation block
@property (nonatomic,readonly) long long criteria;                             //@synthesize criteria=_criteria - In the implementation block
+(id)requestForStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 ;
+(id)requestForMostRecentStickersWithResultLimit:(long long)arg1 ;
+(id)requestForAllRecentStickers;
-(long long)resultLimit;
-(NSString *)stickerIdentifier;
-(id)description;
-(id)initWithCriteria:(long long)arg1 resultLimit:(long long)arg2 ;
-(id)initWithCriteria:(long long)arg1 avatarIdentifier:(id)arg2 stickerIdentifier:(id)arg3 ;
-(id)initWithCriteria:(long long)arg1 ;
-(long long)criteria;
-(unsigned long long)hash;
-(NSString *)avatarIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

