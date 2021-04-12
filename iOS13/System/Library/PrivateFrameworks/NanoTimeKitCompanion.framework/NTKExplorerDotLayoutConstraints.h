/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NTKExplorerDotLayoutConstraints : NSObject <NSCopying, NSSecureCoding> {

	double _dotDiameter;
	double _dotBorderWidth;
	double _dotSpacing;
	double _noServiceDotHeight;

}

@property (assign) double dotDiameter;                     //@synthesize dotDiameter=_dotDiameter - In the implementation block
@property (assign) double dotBorderWidth;                  //@synthesize dotBorderWidth=_dotBorderWidth - In the implementation block
@property (assign) double dotSpacing;                      //@synthesize dotSpacing=_dotSpacing - In the implementation block
@property (assign) double noServiceDotHeight;              //@synthesize noServiceDotHeight=_noServiceDotHeight - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)dotDiameter;
-(double)dotSpacing;
-(double)dotBorderWidth;
-(double)noServiceDotHeight;
-(BOOL)isEqualToLayoutConstraints:(id)arg1 ;
-(void)setDotDiameter:(double)arg1 ;
-(void)setDotBorderWidth:(double)arg1 ;
-(void)setDotSpacing:(double)arg1 ;
-(void)setNoServiceDotHeight:(double)arg1 ;
@end

