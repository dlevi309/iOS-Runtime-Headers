/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

