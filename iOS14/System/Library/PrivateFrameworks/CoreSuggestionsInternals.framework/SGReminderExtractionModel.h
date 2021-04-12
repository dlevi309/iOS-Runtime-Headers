/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGExtractionModel.h>

@class _PASNotificationToken, NSDictionary, NSRegularExpression;

@interface SGReminderExtractionModel : SGExtractionModel {

	_PASNotificationToken* _assetUpdateToken;
	NSDictionary* _enrichments;
	NSDictionary* _inputTokenMapping;
	NSDictionary* _outputConfig;
	NSDictionary* _reminderOverrides;
	NSRegularExpression* _whitelistRegex;

}
+(id)sharedInstance;
+(id)enrichTaggedCharacterRangesWithModelOutput:(id)arg1 usingInputCharacterRanges:(id)arg2 ;
+(id)inputFromTaggedCharacterRanges:(id)arg1 usingTokenMapping:(id)arg2 forModel:(id)arg3 ;
-(id)loadModel;
-(id)enrichments;
-(id)modelDescription;
-(id)_init;
-(void)dealloc;
-(void)updateAll;
-(id)modelInferences:(id)arg1 ;
-(id)reminderOverrides;
-(id)inputTokenMapping;
-(id)outputConfig;
-(BOOL)hasWhitelistedVerbInContent:(id)arg1 ;
-(id)whitelistedVerbInContent:(id)arg1 ;
-(NSRange)_whitelistedVerbRangeInContent:(id)arg1 ;
-(id)whitelistedRangesInContent:(id)arg1 ;
-(void)setReminderOverridesForTesting:(id)arg1 ;
@end

