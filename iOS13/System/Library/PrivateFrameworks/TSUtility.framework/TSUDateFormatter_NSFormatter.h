/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <Foundation/NSFormatter.h>

@class NSString;

@interface TSUDateFormatter_NSFormatter : NSFormatter {

	NSString* mPreferredFormat;
	BOOL isDateOnly;
	BOOL isTimeOnly;

}

@property (nonatomic,retain) NSString * preferredFormat; 
@property (assign,nonatomic) BOOL isDateOnly; 
@property (assign,nonatomic) BOOL isTimeOnly; 
-(void)dealloc;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSString *)preferredFormat;
-(void)setPreferredFormat:(NSString *)arg1 ;
-(BOOL)isDateOnly;
-(BOOL)isTimeOnly;
-(void)setIsDateOnly:(BOOL)arg1 ;
-(void)setIsTimeOnly:(BOOL)arg1 ;
@end

