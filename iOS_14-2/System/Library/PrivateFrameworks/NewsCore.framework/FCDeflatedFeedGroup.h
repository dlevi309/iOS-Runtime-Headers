/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCFeedElement.h>
#import <libobjc.A.dylib/FCFeedGroupOutlining.h>

@class NSArray, NTPBFeedViewportGroup, FCSharedStringIndex, NSString, FCColor, NSDate, FCFeedEdition;

@interface FCDeflatedFeedGroup : NSObject <FCFeedElement, FCFeedGroupOutlining> {

	NSArray* _headlines;
	NTPBFeedViewportGroup* _pbGroup;
	FCSharedStringIndex* _sharedStrings;

}

@property (nonatomic,readonly) NTPBFeedViewportGroup * pbGroup;                          //@synthesize pbGroup=_pbGroup - In the implementation block
@property (nonatomic,readonly) FCSharedStringIndex * sharedStrings;                      //@synthesize sharedStrings=_sharedStrings - In the implementation block
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) long long groupType; 
@property (nonatomic,copy,readonly) NSString * eyebrowText; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * ctaText; 
@property (nonatomic,copy,readonly) FCColor * titleColor; 
@property (nonatomic,copy,readonly) FCColor * darkStyleTitleColor; 
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> cardStyle; 
@property (nonatomic,copy,readonly) id<FCCardStyleProviding> darkCardStyle; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) FCFeedEdition * edition; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) unsigned long long mergeID; 
@property (nonatomic,copy,readonly) NSArray * headlines;                                 //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,copy,readonly) NSString * backingTagID; 
@property (nonatomic,copy,readonly) NSArray * issueIDs; 
@property (nonatomic,readonly) id<FCForYouBridgedFeedGroup> bridgedGroup; 
@property (nonatomic,readonly) BOOL usesPlaceholderHeadlines; 
-(NSString *)ctaText;
-(FCColor *)titleColor;
-(FCColor *)darkStyleTitleColor;
-(BOOL)usesPlaceholderHeadlines;
-(NSString *)subtitle;
-(unsigned long long)options;
-(NTPBFeedViewportGroup *)pbGroup;
-(FCSharedStringIndex *)sharedStrings;
-(NSArray *)issueIDs;
-(NSArray *)headlines;
-(NSDate *)creationDate;
-(id<FCForYouBridgedFeedGroup>)bridgedGroup;
-(NSString *)eyebrowText;
-(long long)feedElementType;
-(id<FCCardStyleProviding>)darkCardStyle;
-(long long)groupType;
-(id<FCCardStyleProviding>)cardStyle;
-(id)initWithPBGroup:(id)arg1 sharedStrings:(id)arg2 ;
-(NSString *)identifier;
-(unsigned long long)mergeID;
-(BOOL)isGap;
-(NSString *)backingTagID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCFeedEdition *)edition;
-(NSString *)title;
-(NSString *)sourceIdentifier;
@end

