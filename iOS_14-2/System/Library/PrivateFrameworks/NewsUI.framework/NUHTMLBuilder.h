/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSMutableString;

@interface NUHTMLBuilder : NSObject {

	NSMutableString* _string;

}

@property (nonatomic,retain) NSMutableString * string;              //@synthesize string=_string - In the implementation block
-(id)HTML;
-(id)init;
-(NSMutableString *)string;
-(void)setString:(NSMutableString *)arg1 ;
-(id)appendStrong:(id)arg1 ;
-(id)appendBreak;
-(id)appendText:(id)arg1 ;
-(id)appendParagraph:(id)arg1 ;
-(id)appendLink:(id)arg1 withURL:(id)arg2 ;
-(id)fullHTML;
-(id)encodeHTMLEntities:(id)arg1 ;
-(id)URLEncode:(id)arg1 ;
-(id)appendParagraphText:(id)arg1 ;
-(id)appendHTML:(id)arg1 ;
@end

