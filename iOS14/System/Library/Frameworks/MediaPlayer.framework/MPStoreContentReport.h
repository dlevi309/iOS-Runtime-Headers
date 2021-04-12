/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPStoreContentReport : NSObject <NSCopying> {

	NSString* _userID;
	NSString* _contentID;
	long long _concernItemType;
	NSString* _commentText;
	NSString* _aucType;
	NSString* _concernTypeID;
	NSString* _displayText;

}

@property (nonatomic,copy) NSString * displayText;                   //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,copy) NSString * userID;                        //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * contentID;                     //@synthesize contentID=_contentID - In the implementation block
@property (assign,nonatomic) long long concernItemType;              //@synthesize concernItemType=_concernItemType - In the implementation block
@property (nonatomic,copy) NSString * commentText;                   //@synthesize commentText=_commentText - In the implementation block
@property (nonatomic,copy) NSString * aucType;                       //@synthesize aucType=_aucType - In the implementation block
@property (nonatomic,copy) NSString * concernTypeID;                 //@synthesize concernTypeID=_concernTypeID - In the implementation block
-(void)setUserID:(NSString *)arg1 ;
-(NSString *)userID;
-(NSString *)aucType;
-(NSString *)commentText;
-(NSString *)contentID;
-(void)setAucType:(NSString *)arg1 ;
-(NSString *)concernTypeID;
-(void)setContentID:(NSString *)arg1 ;
-(long long)concernItemType;
-(void)setConcernItemType:(long long)arg1 ;
-(void)setCommentText:(NSString *)arg1 ;
-(void)setConcernTypeID:(NSString *)arg1 ;
-(id)description;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)displayText;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

