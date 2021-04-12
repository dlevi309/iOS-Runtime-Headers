/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSArray;

@interface SGDataDetectorMatchesWithSignatureRange : NSObject {

	NSArray* _matches;
	NSRange _signatureRange;

}

@property (nonatomic,retain) NSArray * matches;                   //@synthesize matches=_matches - In the implementation block
@property (assign,nonatomic) NSRange signatureRange;              //@synthesize signatureRange=_signatureRange - In the implementation block
-(void)setMatches:(NSArray *)arg1 ;
-(NSArray *)matches;
-(NSRange)signatureRange;
-(void)setSignatureRange:(NSRange)arg1 ;
@end

