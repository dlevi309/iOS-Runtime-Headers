/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSMutableArray, NSArray;

@interface SGAddressCoalescingState : NSObject {

	NSMutableArray* _matches;
	long long _lastAddressIndex;
	long long _lastAddressEndPos;
	_DDResult* _lastResult;

}

@property (nonatomic,retain) NSArray * matches;              //@synthesize matches=_matches - In the implementation block
-(void)setMatches:(NSArray *)arg1 ;
-(id)init;
-(void)coalesceAddress:(_DDResult*)arg1 orAppendMatch:(id)arg2 ;
-(NSArray *)matches;
-(void)dealloc;
@end

