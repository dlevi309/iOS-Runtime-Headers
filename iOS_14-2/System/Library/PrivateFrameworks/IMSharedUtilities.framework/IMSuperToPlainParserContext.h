/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)name;
-(id)initWithAttributedString:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 extractLinks:(BOOL)arg2 ;
-(id)resultsForLogging;
-(NSString *)plainString;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(NSMutableString *)mutablePlainString;
-(void)dealloc;
@end

