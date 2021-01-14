/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGExtractionModel.h>

@class _PASNotificationToken, NSDictionary;

@interface SGStructuredEventExtractionModel : SGExtractionModel {

	_PASNotificationToken* _assetUpdateToken;
	NSDictionary* _inputMapping;
	NSDictionary* _outputMapping;
	NSDictionary* _supportedProviders;
	NSDictionary* _engineConfig;

}
+(id)sharedInstance;
+(id)inputFromTaggedCharacterRanges:(id)arg1 usingInputMapping:(id)arg2 forModel:(id)arg3 ;
-(id)loadModel;
-(id)_init;
-(void)updateAll;
-(id)modelInferences:(id)arg1 ;
-(id)supportedProviders;
-(BOOL)isSenderSupportedForExtraction:(id)arg1 ;
-(BOOL)isSenderSupportedForShadowExtraction:(id)arg1 ;
-(id)engineConfig;
-(id)inputMapping;
-(id)outputMapping;
-(unsigned long long)maxMergeDistanceForSection:(id)arg1 label:(id)arg2 ;
-(id)gazetteer;
@end

