/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)willLoadResourceFromURL:(id)arg1 ;
-(BOOL)parseData:(id)arg1 ;
-(NSURL *)baseURL;
-(id)didFailToLoadResourceFromURL:(id)arg1 ;
-(void)parserWarning:(id)arg1 ;
-(id)init;
-(id<CAMLParserDelegate>)delegate;
-(BOOL)parseBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(NSError *)error;
-(void)setElementValue:(id)arg1 ;
-(BOOL)parseContentsOfURL:(id)arg1 ;
-(void)setDelegate:(id<CAMLParserDelegate>)arg1 ;
-(BOOL)parseString:(id)arg1 ;
-(id)objectById:(id)arg1 ;
-(id)attributeForKey:(id)arg1 remove:(BOOL)arg2 ;
-(id)elementValue;
-(id)result;
-(void)parserError:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)didLoadResource:(id)arg1 fromURL:(id)arg2 ;
-(void)dealloc;
@end

