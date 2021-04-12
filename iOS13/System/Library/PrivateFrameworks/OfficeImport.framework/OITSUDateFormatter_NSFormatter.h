/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setLocale:(OITSULocale *)arg1 ;
-(OITSULocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSString *)preferredFormat;
-(void)setPreferredFormat:(NSString *)arg1 ;
-(BOOL)isDateOnly;
-(BOOL)isTimeOnly;
-(void)setIsDateOnly:(BOOL)arg1 ;
-(void)setIsTimeOnly:(BOOL)arg1 ;
@end

