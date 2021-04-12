/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSArray;

@interface NMSSHConfig : NSObject {

	NSArray* _hostConfigs;

}

@property (nonatomic,retain) NSArray * hostConfigs;              //@synthesize hostConfigs=_hostConfigs - In the implementation block
+(id)configFromFile:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithFile:(id)arg1 ;
-(id)arrayFromString:(id)arg1 ;
-(void)parseLine:(id)arg1 intoArray:(id)arg2 ;
-(void)parseHostWithArguments:(id)arg1 intoArray:(id)arg2 ;
-(void)parseHostNameWithArguments:(id)arg1 intoArray:(id)arg2 ;
-(void)parseUserWithArguments:(id)arg1 intoArray:(id)arg2 ;
-(void)parsePortWithArguments:(id)arg1 intoArray:(id)arg2 ;
-(void)parseIdentityFileWithArguments:(id)arg1 intoArray:(id)arg2 ;
-(id)blanksCharacterSet;
-(NSRange)rangeOfQuotedSubstringInString:(id)arg1 startingAtIndex:(unsigned long long)arg2 ;
-(NSRange)rangeInString:(id)arg1 fromLocationUntilBlankOrEnd:(unsigned long long)arg2 ;
-(NSRange)rangeOfFirstTokenInString:(id)arg1 suffix:(id*)arg2 ;
-(id)hostConfigForHost:(id)arg1 ;
-(int)host:(id)arg1 matchesPatternList:(id)arg2 ;
-(BOOL)host:(id)arg1 matchesSubpattern:(id)arg2 ;
-(NSArray *)hostConfigs;
-(void)setHostConfigs:(NSArray *)arg1 ;
@end

