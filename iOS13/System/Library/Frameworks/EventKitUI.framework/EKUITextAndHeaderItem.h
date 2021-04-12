/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)header;
-(void)setHeader:(NSString *)arg1 ;
-(long long)lines;
-(void)setLines:(long long)arg1 ;
@end

