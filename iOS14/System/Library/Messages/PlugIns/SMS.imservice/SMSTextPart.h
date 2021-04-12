/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
*/


@class NSString, NSMutableString;

@interface SMSTextPart : NSObject {

	NSString* _contentLocation;
	NSMutableString* _text;

}

@property (nonatomic,retain,readonly) NSString * contentLocation;              //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,retain,readonly) NSString * text;                         //@synthesize text=_text - In the implementation block
-(NSString *)contentLocation;
-(NSString *)text;
-(void)dealloc;
-(void)appendText:(id)arg1 ;
-(id)initWithContentLocation:(id)arg1 ;
@end

