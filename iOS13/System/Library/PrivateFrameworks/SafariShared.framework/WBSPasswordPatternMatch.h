/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString, NSDictionary;

@interface WBSPasswordPatternMatch : NSObject {

	unsigned long long _type;
	NSString* _matchedSubstring;
	double _guessesRequired;
	NSDictionary* _userInfo;
	NSRange _range;

}

@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * matchedSubstring;              //@synthesize matchedSubstring=_matchedSubstring - In the implementation block
@property (nonatomic,readonly) NSRange range;                                 //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) unsigned long long endIndex; 
@property (nonatomic,readonly) double guessesRequired;                        //@synthesize guessesRequired=_guessesRequired - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(NSDictionary *)userInfo;
-(NSRange)range;
-(unsigned long long)endIndex;
-(double)guessesRequired;
-(id)initExhaustiveSearchPatternWithMatchedSubstring:(id)arg1 range:(NSRange)arg2 ;
-(NSString *)matchedSubstring;
-(id)compactDescriptionWithMatchedStringColumnWidth:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned long long)arg1 matchedSubstring:(id)arg2 range:(NSRange)arg3 guessesRequired:(double)arg4 userInfo:(id)arg5 ;
@end

