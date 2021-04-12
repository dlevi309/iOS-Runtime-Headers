/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKProgressProvider.h>

@interface CLKSimpleProgressProvider : CLKProgressProvider {

	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)simpleProgressProviderWithProgress:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)progress;
-(void)_validate;
-(void)setProgress:(double)arg1 ;
-(id)JSONObjectRepresentation;
-(double)_progressFractionForNow:(id)arg1 ;
-(BOOL)_needsUpdates;
@end

