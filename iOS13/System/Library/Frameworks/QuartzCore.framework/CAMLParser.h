/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL, NSError;

@interface CAMLParser : NSObject {

	CAMLParserDataRef _data;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLParserDelegate> delegate; 
@property (readonly) NSError * error; 
@property (readonly) id result; 
+(id)parseContentsOfURL:(id)arg1 ;
+(id)parser;
-(id)init;
-(void)dealloc;
-(id<CAMLParserDelegate>)delegate;
-(void)setDelegate:(id<CAMLParserDelegate>)arg1 ;
-(NSURL *)baseURL;
-(NSError *)error;
-(id)result;
-(BOOL)parseData:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(BOOL)parseBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)parseString:(id)arg1 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(id)objectById:(id)arg1 ;
-(id)elementValue;
-(void)setElementValue:(id)arg1 ;
-(id)attributeForKey:(id)arg1 remove:(BOOL)arg2 ;
-(id)willLoadResourceFromURL:(id)arg1 ;
-(void)didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(id)didFailToLoadResourceFromURL:(id)arg1 ;
-(void)parserError:(id)arg1 ;
-(void)parserWarning:(id)arg1 ;
@end

