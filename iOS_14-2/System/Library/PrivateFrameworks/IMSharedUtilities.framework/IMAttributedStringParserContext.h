/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSAttributedString, NSString, NSArray;

@interface IMAttributedStringParserContext : NSObject {

	NSAttributedString* _inString;

}

@property (retain,readonly) NSAttributedString * inString;              //@synthesize inString=_inString - In the implementation block
@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSArray * resultsForLogging; 
@property (readonly) BOOL shouldPreprocess; 
-(NSAttributedString *)inString;
-(void)parserDidStart:(id)arg1 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(NSString *)name;
-(id)initWithAttributedString:(id)arg1 ;
-(void)parserDidEnd:(id)arg1 ;
-(NSArray *)resultsForLogging;
-(id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(NSRange)arg3 ;
-(BOOL)shouldPreprocess;
-(void)dealloc;
@end

