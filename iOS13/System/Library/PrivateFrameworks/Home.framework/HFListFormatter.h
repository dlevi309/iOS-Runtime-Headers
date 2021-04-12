/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface HFListFormatter : NSFormatter {

	NSLocale* _locale;
	unsigned long long _listStyle;
	UListFormatterRef _formatter;

}

@property (assign,nonatomic) UListFormatterRef formatter;               //@synthesize formatter=_formatter - In the implementation block
@property (assign,nonatomic) unsigned long long listStyle;              //@synthesize listStyle=_listStyle - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(UListFormatterRef)formatter;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setFormatter:(UListFormatterRef)arg1 ;
-(unsigned long long)listStyle;
-(void)setListStyle:(unsigned long long)arg1 ;
-(void)_invaildateFormatter;
-(id)_formatOrListWithElements:(id)arg1 ;
-(id)_formatAndListWithElements:(id)arg1 ;
@end

