/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSActivityReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSScoreReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying> {

	double _value;
	double _maxValue;

}

@property (assign,nonatomic) double value;                     //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double maxValue;                  //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,readonly) double normalized; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)dictionaryRepresentation;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(void)add:(id)arg1 ;
-(double)normalized;
-(void)scalarMultiply:(double)arg1 ;
-(id)convertToItemCompatibleWithItem:(id)arg1 ;
@end

