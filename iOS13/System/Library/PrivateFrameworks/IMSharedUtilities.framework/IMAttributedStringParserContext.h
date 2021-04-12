/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)name;
-(id)initWithAttributedString:(id)arg1 ;
-(NSArray *)resultsForLogging;
-(NSAttributedString *)inString;
-(void)parserDidStart:(id)arg1 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(NSRange)arg3 ;
-(BOOL)shouldPreprocess;
-(void)parserDidEnd:(id)arg1 ;
@end

