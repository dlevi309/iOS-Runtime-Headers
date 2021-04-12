/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSURL;

@interface SKUIFacebookLikeStatus : NSObject <NSCopying> {

	NSArray* _friends;
	NSURL* _url;
	BOOL _userLiked;

}

@property (nonatomic,copy) NSArray * friendNames;                            //@synthesize friends=_friends - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                      //@synthesize url=_url - In the implementation block
@property (assign,getter=isUserLiked,nonatomic) BOOL userLiked;              //@synthesize userLiked=_userLiked - In the implementation block
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFriendNames:(NSArray *)arg1 ;
-(void)setUserLiked:(BOOL)arg1 ;
-(NSArray *)friendNames;
-(BOOL)isUserLiked;
-(id)initWithURL:(id)arg1 likeStatusDictionary:(id)arg2 ;
@end

