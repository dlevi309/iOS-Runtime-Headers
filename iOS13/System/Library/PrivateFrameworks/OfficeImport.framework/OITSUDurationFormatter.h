/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(OITSULocale *)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)initWithLocale:(id)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(void)p_commonInit;
-(int)compactStyleStartUnit;
-(void)setCompactStyleStartUnit:(int)arg1 ;
@end

