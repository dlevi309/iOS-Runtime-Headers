/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSArray, NSScanner, NSMutableDictionary;

@interface TMLMarkdownParser : NSObject {

	NSArray* _rules;
	NSScanner* _scanner;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _tag;
	NSArray* _regex;
	NSArray* _extraRules;
	NSArray* _extraRegex;

}
+(id)parse:(id)arg1 tags:(id*)arg2 withRules:(id)arg3 ;
+(id)unescapeString:(id)arg1 ;
+(id)regexFromRules:(id)arg1 ;
+(id)stringOfTagType:(id)arg1 andCount:(unsigned long long)arg2 ;
+(id)preProcessString:(id)arg1 ;
+(id)postProcessString:(id)arg1 ;
-(id)init;
-(id)replacestring:(id)arg1 usingRule:(id)arg2 atIndex:(unsigned long long)arg3 additonalRules:(BOOL)arg4 ;
-(BOOL)isListTagOpen:(id)arg1 ;
-(id)tagFromType:(int)arg1 ;
-(id)parse:(id)arg1 tags:(id*)arg2 ;
@end

