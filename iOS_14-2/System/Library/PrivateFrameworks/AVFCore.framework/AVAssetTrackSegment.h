/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVAssetTrackSegment : NSObject <NSSecureCoding> {

	SCD_Struct_CM9 _timeMapping;

}

@property (nonatomic,readonly) SCD_Struct_CM9 timeMapping;              //@synthesize timeMapping=_timeMapping - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
+(BOOL)supportsSecureCoding;
-(id)_initWithTimeMapping:(SCD_Struct_CM9)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_CM9)timeMapping;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg1 ;
@end

