/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <Foundation/NSFormatter.h>

@class NSString, OITSULocale;

@interface OITSUDurationFormatter : NSFormatter {

	NSString* mFormat;
	OITSULocale* mLocale;
	int mCompactStyleStartUnit;

}

@property (nonatomic,copy) NSString * format; 
@property (assign,nonatomic) int compactStyleStartUnit; 
@property (readonly) OITSULocale * locale; 
-(void)setFormat:(NSString *)arg1 ;
-(id)initWithLocale:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSString *)format;
-(OITSULocale *)locale;
-(id)init;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)p_commonInit;
-(int)compactStyleStartUnit;
-(void)setCompactStyleStartUnit:(int)arg1 ;
@end

