/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariShared/WBSParsecModel.h>

@class NSArray, NSString;

@interface WBSParsecSportsScoreSummary : WBSParsecModel {

	NSArray* _images;
	NSString* _subtitle;
	NSArray* _scores;

}

@property (nonatomic,copy,readonly) NSArray * images;                 //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scores;                 //@synthesize scores=_scores - In the implementation block
+(id)schema;
-(NSArray *)scores;
-(NSString *)subtitle;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)images;
@end

