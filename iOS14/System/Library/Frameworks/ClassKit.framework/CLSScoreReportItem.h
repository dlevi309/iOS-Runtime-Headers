/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)setMaxValue:(double)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(double)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)maxValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)add:(id)arg1 ;
-(double)value;
-(double)normalized;
-(void)scalarMultiply:(double)arg1 ;
-(id)convertToItemCompatibleWithItem:(id)arg1 ;
@end

