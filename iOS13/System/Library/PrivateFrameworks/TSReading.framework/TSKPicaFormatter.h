/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSString, NSNumber;

@interface TSKPicaFormatter : NSFormatter {

	NSString* mPicaSeparator;
	NSNumber* mMinimum;
	NSNumber* mMaximum;

}

@property (nonatomic,copy) NSString * picaSeparator; 
@property (nonatomic,copy) NSNumber * minimum; 
@property (nonatomic,copy) NSNumber * maximum; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(NSNumber *)minimum;
-(void)setMinimum:(NSNumber *)arg1 ;
-(NSNumber *)maximum;
-(void)setMaximum:(NSNumber *)arg1 ;
-(id)initWithPicaSeparator:(id)arg1 ;
-(void)setPicaSeparator:(NSString *)arg1 ;
-(NSString *)picaSeparator;
@end

