/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(CGSize)size;
-(double)position;
-(void)setSize:(CGSize)arg1 ;
-(BOOL)immutable;
-(void)setPosition:(double)arg1 ;
-(void)setImmutable:(BOOL)arg1 ;
-(void)setStringToYearWithDate:(id)arg1 timeZone:(id)arg2 ;
-(void)retainStringAndSizeFromLabelInfo:(id)arg1 ;
-(void)setStringToMonthAndDayWithDate:(id)arg1 timeZone:(id)arg2 ;
@end

