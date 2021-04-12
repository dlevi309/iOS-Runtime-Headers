/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)requestForMostRecentStickersWithResultLimit:(long long)arg1 ;
+(id)requestForAllRecentStickers;
+(id)requestForStickersWithAvatarIdentifier:(id)arg1 stickerIdentifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)resultLimit;
-(long long)criteria;
-(id)initWithCriteria:(long long)arg1 ;
-(NSString *)avatarIdentifier;
-(NSString *)stickerIdentifier;
-(id)initWithCriteria:(long long)arg1 resultLimit:(long long)arg2 ;
-(id)initWithCriteria:(long long)arg1 avatarIdentifier:(id)arg2 stickerIdentifier:(id)arg3 ;
@end

