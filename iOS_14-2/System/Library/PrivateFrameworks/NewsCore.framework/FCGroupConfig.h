/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class FCColor, NSArray, FCColorGradient, NSDictionary, NSString;

@interface FCGroupConfig : NSObject {

	FCColor* _groupTitleColor;
	FCColor* _groupDarkStyleTitleColor;
	NSArray* _groupFonts;
	unsigned long long _cutoffTimeSecs;
	unsigned long long _cutoffCount;
	FCColorGradient* _groupBackgroundColorGradient;
	FCColorGradient* _groupDarkStyleBackgroundColorGradient;
	NSDictionary* _dictionary;
	NSDictionary* _articleMetadataByArticleID;

}

@property (nonatomic,retain) NSDictionary * dictionary;                                            //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) FCColor * groupTitleColor;                                            //@synthesize groupTitleColor=_groupTitleColor - In the implementation block
@property (nonatomic,retain) FCColor * groupDarkStyleTitleColor;                                   //@synthesize groupDarkStyleTitleColor=_groupDarkStyleTitleColor - In the implementation block
@property (assign,nonatomic) unsigned long long cutoffTimeSecs;                                    //@synthesize cutoffTimeSecs=_cutoffTimeSecs - In the implementation block
@property (assign,nonatomic) unsigned long long cutoffCount;                                       //@synthesize cutoffCount=_cutoffCount - In the implementation block
@property (nonatomic,retain) NSArray * groupFonts;                                                 //@synthesize groupFonts=_groupFonts - In the implementation block
@property (nonatomic,retain) NSDictionary * articleMetadataByArticleID;                            //@synthesize articleMetadataByArticleID=_articleMetadataByArticleID - In the implementation block
@property (nonatomic,retain) FCColorGradient * groupBackgroundColorGradient;                       //@synthesize groupBackgroundColorGradient=_groupBackgroundColorGradient - In the implementation block
@property (nonatomic,retain) FCColorGradient * groupDarkStyleBackgroundColorGradient;              //@synthesize groupDarkStyleBackgroundColorGradient=_groupDarkStyleBackgroundColorGradient - In the implementation block
@property (nonatomic,readonly) NSString * articleListID; 
@property (nonatomic,readonly) NSString * groupName; 
@property (nonatomic,readonly) NSString * groupSubtitle; 
@property (nonatomic,readonly) NSString * groupTitleFontName; 
@property (nonatomic,readonly) double groupTitleFontSize; 
@property (nonatomic,readonly) double groupTitleFontSizeiPad; 
@property (nonatomic,readonly) double groupTitleFontTracking; 
@property (nonatomic,readonly) double groupTitleFontTrackingiPad; 
@property (nonatomic,readonly) double groupTitleOffsetHeight; 
@property (nonatomic,readonly) double groupTitleOffsetHeightiPad; 
@property (nonatomic,readonly) double groupTitleOffsetY; 
@property (nonatomic,readonly) double groupTitleOffsetYiPad; 
@property (nonatomic,readonly) NSString * groupActionTitle; 
@property (nonatomic,readonly) NSString * groupActionURLString; 
@property (nonatomic,readonly) NSString * sectionID; 
@property (nonatomic,readonly) NSString * channelID; 
@property (nonatomic,readonly) NSString * feedID; 
-(NSString *)sectionID;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)groupName;
-(FCColor *)groupTitleColor;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)channelID;
-(FCColor *)groupDarkStyleTitleColor;
-(NSDictionary *)dictionary;
-(NSString *)articleListID;
-(NSString *)groupSubtitle;
-(NSString *)groupTitleFontName;
-(double)groupTitleOffsetY;
-(double)groupTitleFontSize;
-(double)groupTitleOffsetYiPad;
-(double)groupTitleOffsetHeight;
-(double)groupTitleOffsetHeightiPad;
-(double)groupTitleFontSizeiPad;
-(double)groupTitleFontTracking;
-(double)groupTitleFontTrackingiPad;
-(NSString *)groupActionTitle;
-(NSString *)groupActionURLString;
-(void)setGroupTitleColor:(FCColor *)arg1 ;
-(void)setGroupDarkStyleTitleColor:(FCColor *)arg1 ;
-(NSArray *)groupFonts;
-(void)setGroupFonts:(NSArray *)arg1 ;
-(unsigned long long)cutoffTimeSecs;
-(void)setCutoffTimeSecs:(unsigned long long)arg1 ;
-(unsigned long long)cutoffCount;
-(void)setCutoffCount:(unsigned long long)arg1 ;
-(FCColorGradient *)groupBackgroundColorGradient;
-(void)setGroupBackgroundColorGradient:(FCColorGradient *)arg1 ;
-(FCColorGradient *)groupDarkStyleBackgroundColorGradient;
-(void)setGroupDarkStyleBackgroundColorGradient:(FCColorGradient *)arg1 ;
-(NSDictionary *)articleMetadataByArticleID;
-(void)setArticleMetadataByArticleID:(NSDictionary *)arg1 ;
-(NSString *)feedID;
@end

