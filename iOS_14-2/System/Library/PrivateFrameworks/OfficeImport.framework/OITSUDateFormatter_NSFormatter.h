/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <Foundation/NSFormatter.h>

@class NSString, OITSULocale;

@interface OITSUDateFormatter_NSFormatter : NSFormatter {

	NSString* _preferredFormat;
	BOOL isDateOnly;
	BOOL isTimeOnly;
	OITSULocale* _locale;

}

@property (nonatomic,retain) NSString * preferredFormat;              //@synthesize preferredFormat=_preferredFormat - In the implementation block
@property (assign,nonatomic) BOOL isDateOnly; 
@property (assign,nonatomic) BOOL isTimeOnly; 
@property (nonatomic,retain) OITSULocale * locale;                    //@synthesize locale=_locale - In the implementation block
-(id)stringForObjectValue:(id)arg1 ;
-(OITSULocale *)locale;
-(void)setLocale:(OITSULocale *)arg1 ;
-(id)init;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSString *)preferredFormat;
-(void)setPreferredFormat:(NSString *)arg1 ;
-(BOOL)isDateOnly;
-(BOOL)isTimeOnly;
-(void)setIsDateOnly:(BOOL)arg1 ;
-(void)setIsTimeOnly:(BOOL)arg1 ;
@end

