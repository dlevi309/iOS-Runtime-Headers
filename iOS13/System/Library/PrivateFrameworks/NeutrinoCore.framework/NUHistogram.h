/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface NUHistogram : NSObject <NSCopying, NSMutableCopying> {

	unique_ptr<NU::Histogram<long, double>, std::__1::default_delete<NU::Histogram<long, double> > >* _histogram;

}

@property (nonatomic,readonly) long long binCount; 
@property (nonatomic,readonly) SCD_Struct_NU10 range; 
@property (nonatomic,readonly) long long sampleCount; 
@property (nonatomic,readonly) const long long* values; 
@property (nonatomic,readonly) double minimum; 
@property (nonatomic,readonly) double maximum; 
@property (nonatomic,readonly) double mode; 
-(id)init;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(const long long*)values;
-(double)minimum;
-(double)maximum;
-(SCD_Struct_NU10)range;
-(double)mode;
-(long long)sampleCount;
-(id)initWithHistogram:(id)arg1 ;
-(double)percentile:(double)arg1 ;
-(long long)binCount;
-(id)initWithBinCount:(long long)arg1 range:(SCD_Struct_NU10)arg2 ;
@end

