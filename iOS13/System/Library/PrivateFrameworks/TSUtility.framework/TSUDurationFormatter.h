/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(void)p_commonInit;
-(int)compactStyleStartUnit;
-(void)setCompactStyleStartUnit:(int)arg1 ;
@end

