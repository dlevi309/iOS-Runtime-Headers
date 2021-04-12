/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
*/


@class NSString, NSMutableString;

@interface SMSTextPart : NSObject {

	NSString* _contentLocation;
	NSMutableString* _text;

}

@property (nonatomic,retain,readonly) NSString * contentLocation;              //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,retain,readonly) NSString * text;                         //@synthesize text=_text - In the implementation block
-(void)dealloc;
-(NSString *)text;
-(NSString *)contentLocation;
-(void)appendText:(id)arg1 ;
-(id)initWithContentLocation:(id)arg1 ;
@end

