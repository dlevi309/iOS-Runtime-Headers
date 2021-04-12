/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMFromSuperParserContext.h>

@class NSMutableString, NSString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext {

	NSMutableString* _plainString;
	BOOL _extractLinks;
	NSMutableString* _mutablePlainString;

}

@property (nonatomic,readonly) NSString * plainString; 
@property (nonatomic,readonly) NSMutableString * mutablePlainString;              //@synthesize mutablePlainString=_mutablePlainString - In the implementation block
-(void)dealloc;
-(id)name;
-(id)initWithAttributedString:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 extractLinks:(BOOL)arg2 ;
-(id)resultsForLogging;
-(NSString *)plainString;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(NSMutableString *)mutablePlainString;
@end

