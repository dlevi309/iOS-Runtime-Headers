/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/


@class NSURL, NSArray;

@interface SLOpenGraphNode : NSObject {

	BOOL _likedByMe;
	unsigned long long _numberOfLikes;
	unsigned long long _numberOfFriendLikes;
	int _fetchState;
	NSURL* _URL;
	NSArray* _likedByFriends;

}

@property (assign,nonatomic) int fetchState;                          //@synthesize fetchState=_fetchState - In the implementation block
@property (readonly) NSURL * URL;                                     //@synthesize URL=_URL - In the implementation block
@property (readonly) BOOL likedByMe; 
@property (readonly) unsigned long long globalLikeCount; 
@property (readonly) unsigned long long friendLikeCount; 
@property (readonly) NSArray * likedByFriends;                        //@synthesize likedByFriends=_likedByFriends - In the implementation block
-(void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(id)cache;
-(void)_startUpdateIfNeeded;
-(BOOL)likedByMe;
-(unsigned long long)globalLikeCount;
-(unsigned long long)friendLikeCount;
-(void)likeWithCompletion:(/*^block*/id)arg1 ;
-(void)unlikeWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)likedByFriends;
-(int)fetchState;
-(void)setFetchState:(int)arg1 ;
@end

