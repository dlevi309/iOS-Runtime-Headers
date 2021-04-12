/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSString, NSMutableArray;

@interface NUArticleExcerptHTMLStripper : NSObject <NSXMLParserDelegate> {

	NSString* _strippedString;
	NSMutableArray* _parts;

}

@property (nonatomic,readonly) NSMutableArray * parts;                 //@synthesize parts=_parts - In the implementation block
@property (nonatomic,readonly) NSString * strippedString;              //@synthesize strippedString=_strippedString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)parts;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(id)initWithHTMLString:(id)arg1 ;
-(NSString *)strippedString;
-(id)stripHTMLString:(id)arg1 ;
@end

