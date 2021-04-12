/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSParsecLegacySearchResult.h>

@class NSMutableArray, NSString;

@interface WBSParsecSearchMoviesResult : WBSParsecLegacySearchResult {

	NSMutableArray* _posterRepresentations;
	NSString* _descriptionLeadInText;

}

@property (nonatomic,readonly) NSString * descriptionLeadInText;              //@synthesize descriptionLeadInText=_descriptionLeadInText - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)descriptionLeadInText;
-(id)postersWithSession:(id)arg1 ;
@end

