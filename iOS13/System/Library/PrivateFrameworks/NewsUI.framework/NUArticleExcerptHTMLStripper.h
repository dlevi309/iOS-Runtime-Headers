/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(id)initWithHTMLString:(id)arg1 ;
-(NSString *)strippedString;
-(id)stripHTMLString:(id)arg1 ;
-(NSMutableArray *)parts;
@end

