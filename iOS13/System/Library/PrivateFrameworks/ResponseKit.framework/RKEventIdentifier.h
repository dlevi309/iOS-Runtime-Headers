/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class RKMontrealModel, RKNLEventTokenizer;

@interface RKEventIdentifier : NSObject {

	RKMontrealModel* _model;
	RKNLEventTokenizer* _tokenizer;
	const IOMappings* _ioMappings;
	int _outputPermutation[5];

}
-(id)init;
-(id)initWithLanguageID:(id)arg1 ;
-(id)_identifyOwnedTokenSequences:(id)arg1 ;
-(id)_identifyStrings:(id)arg1 otherDateCount:(unsigned long long)arg2 otherDates:(RKEventIdentifierRange*)arg3 ;
-(void)resetEventIdentifierModel;
-(id)identifyStrings:(id)arg1 ;
-(id)identifyText:(id)arg1 ;
-(id)identifyMessage:(id)arg1 ;
@end

