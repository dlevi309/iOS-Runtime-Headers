/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _MXExtensionBaseMapRequest : NSObject <NSSecureCoding> {

	SCD_Struct_MK6 _mapRect;

}

@property (assign,nonatomic) SCD_Struct_MK6 mapRect;              //@synthesize mapRect=_mapRect - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMapRect:(SCD_Struct_MK6)arg1 ;
-(SCD_Struct_MK6)mapRect;
@end

