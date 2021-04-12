/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@class NSLocale;

@interface AMPICUNumberFormatter : NSObject {

	unsigned long long _extendedStyle;
	NSLocale* _locale;
	void* _icuNumberFormatter;

}

@property (assign,nonatomic) void* icuNumberFormatter;                      //@synthesize icuNumberFormatter=_icuNumberFormatter - In the implementation block
@property (assign,nonatomic) unsigned long long extendedStyle;              //@synthesize extendedStyle=_extendedStyle - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                             //@synthesize locale=_locale - In the implementation block
-(NSLocale *)locale;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)init;
-(id)stringFromNumber:(id)arg1 ;
-(void)dealloc;
-(id)initWithExtendedStyle:(unsigned long long)arg1 locale:(id)arg2 ;
-(void)setExtendedStyle:(unsigned long long)arg1 ;
-(void*)icuNumberFormatter;
-(void)setIcuNumberFormatter:(void*)arg1 ;
-(unsigned long long)extendedStyle;
@end

