/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


#import <Stocks/Stocks-Structs.h>
@class NSString;

@interface ChartLabelInfo : NSObject {

	NSString* _string;
	CGSize _size;
	double _position;
	BOOL _immutable;

}

@property (nonatomic,retain) NSString * string;              //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) CGSize size;                    //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double position;                //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) BOOL immutable;               //@synthesize immutable=_immutable - In the implementation block
-(double)position;
-(BOOL)immutable;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setImmutable:(BOOL)arg1 ;
-(id)description;
-(void)setPosition:(double)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStringToYearWithDate:(id)arg1 timeZone:(id)arg2 ;
-(void)retainStringAndSizeFromLabelInfo:(id)arg1 ;
-(void)setStringToMonthAndDayWithDate:(id)arg1 timeZone:(id)arg2 ;
@end

