/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCGroupConfig.h>

@class NSArray, NSDictionary, NSString;

@interface FCSpecialEventGroupConfig : FCGroupConfig {

	NSArray* _specialEventItems;
	NSDictionary* _specialEventsArticleMetadataByArticleID;
	NSArray* _breakingNewsArticleIDs;
	NSArray* _specialEventArticleIDs;

}

@property (nonatomic,retain) NSArray * breakingNewsArticleIDs;                                      //@synthesize breakingNewsArticleIDs=_breakingNewsArticleIDs - In the implementation block
@property (nonatomic,retain) NSArray * specialEventItems;                                           //@synthesize specialEventItems=_specialEventItems - In the implementation block
@property (nonatomic,retain) NSArray * specialEventArticleIDs;                                      //@synthesize specialEventArticleIDs=_specialEventArticleIDs - In the implementation block
@property (nonatomic,readonly) NSString * groupMicaAnimationFileURLString; 
@property (nonatomic,readonly) NSString * groupMicaAnimationFileURLStringiPad; 
@property (nonatomic,readonly) NSDictionary * specialEventsArticleMetadataByArticleID;              //@synthesize specialEventsArticleMetadataByArticleID=_specialEventsArticleMetadataByArticleID - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)groupMicaAnimationFileURLString;
-(NSString *)groupMicaAnimationFileURLStringiPad;
-(NSArray *)specialEventItems;
-(void)setSpecialEventItems:(NSArray *)arg1 ;
-(NSDictionary *)specialEventsArticleMetadataByArticleID;
-(NSArray *)breakingNewsArticleIDs;
-(void)setBreakingNewsArticleIDs:(NSArray *)arg1 ;
-(NSArray *)specialEventArticleIDs;
-(void)setSpecialEventArticleIDs:(NSArray *)arg1 ;
@end

