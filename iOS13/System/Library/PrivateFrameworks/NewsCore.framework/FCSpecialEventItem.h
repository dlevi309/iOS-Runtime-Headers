/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCSpecialEventItemProviding.h>
#import <libobjc.A.dylib/FCSpecialEventArticleProviding.h>
#import <libobjc.A.dylib/FCSpecialEventWebEmbedProviding.h>

@class NSString, NSDate;

@interface FCSpecialEventItem : NSObject <FCSpecialEventItemProviding, FCSpecialEventArticleProviding, FCSpecialEventWebEmbedProviding> {

	unsigned long long _itemType;
	NSString* _title;
	NSString* _actionTitle;
	NSString* _actionUrlString;
	NSString* _articleID;
	NSString* _urlString;
	NSString* _storyType;
	NSDate* _displayDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FCSpecialEventArticleProviding> asArticle; 
@property (nonatomic,readonly) id<FCSpecialEventWebEmbedProviding> asWebEmbed; 
@property (nonatomic,readonly) unsigned long long itemType;                                 //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionTitle;                                 //@synthesize actionTitle=_actionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionUrlString;                             //@synthesize actionUrlString=_actionUrlString - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * articleID;                                   //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * displayDate;                                   //@synthesize displayDate=_displayDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyType;                                   //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlString;                                   //@synthesize urlString=_urlString - In the implementation block
+(id)itemWithArticleID:(id)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4 storyType:(id)arg5 displayDate:(id)arg6 ;
+(id)itemWithUrlString:(id)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4 ;
+(id)itemWithItemDict:(id)arg1 ;
+(id)itemWithArticleDict:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(unsigned long long)itemType;
-(NSString *)urlString;
-(NSDate *)displayDate;
-(NSString *)actionTitle;
-(NSString *)articleID;
-(NSString *)storyType;
-(id)initWithSpecialEventItemType:(unsigned long long)arg1 title:(id)arg2 actionTitle:(id)arg3 actionUrlString:(id)arg4 articleID:(id)arg5 urlString:(id)arg6 storyType:(id)arg7 displayDate:(id)arg8 ;
-(id<FCSpecialEventArticleProviding>)asArticle;
-(id<FCSpecialEventWebEmbedProviding>)asWebEmbed;
-(NSString *)actionUrlString;
@end

