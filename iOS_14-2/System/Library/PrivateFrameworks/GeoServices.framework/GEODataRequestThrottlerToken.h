/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GEODataRequestThrottlerToken : NSObject <NSSecureCoding> {

	double _createdAt;
	SCD_Struct_GE91 _kind;
	NSString* _bundleId;

}
+(BOOL)supportsSecureCoding;
-(void)refresh;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)encodeWithXPCCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequest:(SCD_Struct_GE91)arg1 forClient:(id)arg2 ;
-(BOOL)isValidForRequest:(SCD_Struct_GE91)arg1 client:(id)arg2 ;
-(id)initWithXPCCoder:(id)arg1 ;
@end

