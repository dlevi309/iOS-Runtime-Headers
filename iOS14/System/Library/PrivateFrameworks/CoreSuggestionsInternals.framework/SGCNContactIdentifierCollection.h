/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSMutableData, NSMutableArray;

@interface SGCNContactIdentifierCollection : NSObject {

	NSMutableData* _optimizedBuffer;
	NSMutableArray* _unoptimizedIdentifiers;

}
-(id)init;
-(void)addCNContactIdentifier:(id)arg1 ;
-(BOOL)_optimizeAndAddCNContactIdentifier:(id)arg1 ;
-(id)proxyArray;
@end

