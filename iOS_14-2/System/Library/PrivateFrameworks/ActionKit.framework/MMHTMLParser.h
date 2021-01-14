/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@interface MMHTMLParser : NSObject
-(id)parseBlockTagWithScanner:(id)arg1 ;
-(id)parseCommentWithScanner:(id)arg1 ;
-(id)parseInlineTagWithScanner:(id)arg1 ;
-(id)_parseStrictBlockTagWithScanner:(id)arg1 ;
-(BOOL)_parseEndTag:(id)arg1 withScanner:(id)arg2 ;
-(id)_parseLenientBlockTagWithScanner:(id)arg1 ;
-(NSRange)_parseNameWithScanner:(id)arg1 ;
-(BOOL)_parseStringWithScanner:(id)arg1 ;
-(BOOL)_parseAttributeValueWithScanner:(id)arg1 ;
-(void)_parseAttributesWithScanner:(id)arg1 ;
@end

