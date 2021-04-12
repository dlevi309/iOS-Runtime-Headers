/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <libobjc.A.dylib/APPCPromotableBlacklistReasonCharacteristic.h>

@class NSArray;

@interface APPCBlacklistReasonCharacteristic : NSObject <APPCPromotableBlacklistReasonCharacteristic> {

	 globalCategories;
	 globalKeywords;
	 campaignCategories;
	 campaignKeywords;

}

@property (copy,nonatomic) NSArray * globalCategories; 
@property (copy,nonatomic) NSArray * globalKeywords; 
@property (copy,nonatomic) NSArray * campaignCategories; 
@property (copy,nonatomic) NSArray * campaignKeywords; 
-(id)init;
-(NSArray *)globalCategories;
-(void)setGlobalCategories:(NSArray *)arg1 ;
-(NSArray *)globalKeywords;
-(void)setGlobalKeywords:(NSArray *)arg1 ;
-(NSArray *)campaignCategories;
-(void)setCampaignCategories:(NSArray *)arg1 ;
-(NSArray *)campaignKeywords;
-(void)setCampaignKeywords:(NSArray *)arg1 ;
-(id)initWithGlobalCategories:(id)arg1 globalKeywords:(id)arg2 campaignCategories:(id)arg3 campaignKeywords:(id)arg4 ;
@end

