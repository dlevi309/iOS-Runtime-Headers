/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


@class NSArray, NSDictionary;

@interface TVPlaylist : NSObject {

	NSArray* _mediaItems;
	long long _endAction;
	long long _repeatMode;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) long long endAction;                      //@synthesize endAction=_endAction - In the implementation block
@property (assign,nonatomic) long long repeatMode;                     //@synthesize repeatMode=_repeatMode - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaItems;              //@synthesize mediaItems=_mediaItems - In the implementation block
-(void)addObject:(id)arg1 ;
-(NSDictionary *)userInfo;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSArray *)mediaItems;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(void)setEndAction:(long long)arg1 ;
-(long long)endAction;
@end

