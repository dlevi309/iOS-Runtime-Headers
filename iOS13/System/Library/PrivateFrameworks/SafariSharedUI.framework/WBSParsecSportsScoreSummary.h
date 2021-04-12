/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)images;
-(NSString *)subtitle;
-(NSArray *)scores;
@end

