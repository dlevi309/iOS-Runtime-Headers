/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSString, NSDictionary;

@interface EKUITextAndHeaderItem : NSObject {

	NSString* _text;
	NSString* _header;
	long long _lines;

}

@property (nonatomic,retain) NSString * text;                                        //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * header;                                      //@synthesize header=_header - In the implementation block
@property (assign,nonatomic) long long lines;                                        //@synthesize lines=_lines - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)itemWithText:(id)arg1 andHeader:(id)arg2 ;
-(NSDictionary *)dictionaryRepresentation;
-(long long)lines;
-(void)setLines:(long long)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
-(void)setText:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)text;
@end

