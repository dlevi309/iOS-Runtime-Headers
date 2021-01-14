/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSUDurationFormatter : NSFormatter {

	NSString* mFormat;
	int mCompactStyleStartUnit;

}

@property (nonatomic,copy) NSString * format; 
@property (assign,nonatomic) int compactStyleStartUnit; 
-(void)setFormat:(NSString *)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSString *)format;
-(id)init;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)p_commonInit;
-(int)compactStyleStartUnit;
-(void)setCompactStyleStartUnit:(int)arg1 ;
@end

