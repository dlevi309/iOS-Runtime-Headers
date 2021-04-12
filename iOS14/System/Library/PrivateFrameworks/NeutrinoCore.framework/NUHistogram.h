/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface NUHistogram : NSObject <NSCopying, NSMutableCopying> {

	unique_ptr<NU::Histogram<long, double>, std::__1::default_delete<NU::Histogram<long, double> > >* _histogram;

}

@property (nonatomic,readonly) long long binCount; 
@property (nonatomic,readonly) SCD_Struct_NU11 range; 
@property (nonatomic,readonly) long long sampleCount; 
@property (nonatomic,readonly) const long long* values; 
@property (nonatomic,readonly) double minimum; 
@property (nonatomic,readonly) double maximum; 
@property (nonatomic,readonly) double mode; 
-(double)maximum;
-(double)minimum;
-(double)mode;
-(id)init;
-(SCD_Struct_NU11)range;
-(const long long*)values;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)sampleCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHistogram:(id)arg1 ;
-(long long)binCount;
-(double)percentile:(double)arg1 ;
-(id)initWithBinCount:(long long)arg1 range:(SCD_Struct_NU11)arg2 ;
@end

