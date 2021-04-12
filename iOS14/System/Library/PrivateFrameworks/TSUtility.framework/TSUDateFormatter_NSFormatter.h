/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSString *)preferredFormat;
-(void)dealloc;
-(void)setPreferredFormat:(NSString *)arg1 ;
-(BOOL)isDateOnly;
-(BOOL)isTimeOnly;
-(void)setIsDateOnly:(BOOL)arg1 ;
-(void)setIsTimeOnly:(BOOL)arg1 ;
@end

