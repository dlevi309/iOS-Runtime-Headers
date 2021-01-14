/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKitInternal.framework/ReminderKitInternal
*/


@class NSLocale;

@interface TTRNLTextSlotParser : NSObject {

	NSLocale* _locale;
	void* _parser;

}

@property (nonatomic,retain) NSLocale * locale;              //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) void* parser;                   //@synthesize parser=_parser - In the implementation block
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)initWithLocale:(id)arg1 now:(id)arg2 ;
-(id)parseString:(id)arg1 referenceTimeZone:(id)arg2 ;
-(void*)parser;
-(void)setParser:(void*)arg1 ;
-(void)dealloc;
@end

