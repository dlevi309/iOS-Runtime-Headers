/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary, NSMutableString;

@interface VMUOptionParser : NSObject {

	NSString* _purposeDescription;
	NSString* _syntaxDescription;
	NSString* _discussionDescription;
	NSMutableArray* _optionDescriptions;
	NSMutableArray* _appleInternalOptionDescriptions;
	NSMutableDictionary* _optionBlockByString;
	CFArrayRef _longOptStructs;
	NSMutableString* _shortOpts;
	unsigned long long _spacing;
	BOOL _singleHyphenLongNames;
	BOOL _parametersShowAsAssignment;

}

@property (nonatomic,copy) NSString * purposeDescription;                  //@synthesize purposeDescription=_purposeDescription - In the implementation block
@property (nonatomic,copy) NSString * syntaxDescription;                   //@synthesize syntaxDescription=_syntaxDescription - In the implementation block
@property (nonatomic,copy) NSString * discussion;                          //@synthesize discussionDescription=_discussionDescription - In the implementation block
@property (assign,nonatomic) BOOL singleHyphenLongNames;                   //@synthesize singleHyphenLongNames=_singleHyphenLongNames - In the implementation block
@property (assign,nonatomic) BOOL parametersShowAsAssignment;              //@synthesize parametersShowAsAssignment=_parametersShowAsAssignment - In the implementation block
@property (readonly) int optind; 
-(void)registerOptionWithLongName:(id)arg1 shortName:(id)arg2 argumentKind:(int)arg3 argumentName:(id)arg4 optionDescription:(id)arg5 flags:(unsigned long long)arg6 handler:(/*^block*/id)arg7 ;
-(id)parseArguments:(char**)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)printOptionDescriptions:(id)arg1 ;
-(NSString *)discussion;
-(void)usage:(id)arg1 shouldExit:(BOOL)arg2 ;
-(void)registerOptionWithLongName:(id)arg1 shortName:(id)arg2 argumentKind:(int)arg3 argumentName:(id)arg4 optionDescription:(id)arg5 handler:(/*^block*/id)arg6 ;
-(id)parseArgumentsArray:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSString *)purposeDescription;
-(void)setPurposeDescription:(NSString *)arg1 ;
-(NSString *)syntaxDescription;
-(void)setSyntaxDescription:(NSString *)arg1 ;
-(void)setDiscussion:(NSString *)arg1 ;
-(id)init;
-(BOOL)singleHyphenLongNames;
-(void)setSingleHyphenLongNames:(BOOL)arg1 ;
-(BOOL)parametersShowAsAssignment;
-(void)setParametersShowAsAssignment:(BOOL)arg1 ;
-(int)optind;
-(void)usage:(id)arg1 ;
-(void)dealloc;
@end

