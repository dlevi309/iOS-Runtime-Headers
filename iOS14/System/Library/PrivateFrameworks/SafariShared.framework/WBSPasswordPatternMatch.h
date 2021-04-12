/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)userInfo;
-(unsigned long long)endIndex;
-(NSRange)range;
-(id)description;
-(double)guessesRequired;
-(id)initWithType:(unsigned long long)arg1 matchedSubstring:(id)arg2 range:(NSRange)arg3 guessesRequired:(double)arg4 userInfo:(id)arg5 ;
-(id)initExhaustiveSearchPatternWithMatchedSubstring:(id)arg1 range:(NSRange)arg2 ;
-(unsigned long long)type;
-(unsigned long long)hash;
-(NSString *)matchedSubstring;
-(id)compactDescriptionWithMatchedStringColumnWidth:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

