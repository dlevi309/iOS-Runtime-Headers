/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKProgressProvider.h>

@interface CLKSimpleProgressProvider : CLKProgressProvider {

	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)simpleProgressProviderWithProgress:(double)arg1 ;
-(double)progress;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_validate;
-(void)setProgress:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)JSONObjectRepresentation;
-(double)_progressFractionForNow:(id)arg1 ;
-(BOOL)_needsUpdates;
@end

