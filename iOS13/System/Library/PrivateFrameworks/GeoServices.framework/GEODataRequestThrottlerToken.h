/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GEODataRequestThrottlerToken : NSObject <NSSecureCoding> {

	double _createdAt;
	SCD_Struct_GE94 _kind;
	NSString* _bundleId;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)refresh;
-(id)initWithXPCCoder:(id)arg1 ;
-(void)encodeWithXPCCoder:(id)arg1 ;
-(id)initWithRequest:(SCD_Struct_GE94)arg1 forClient:(id)arg2 ;
-(BOOL)isValidForRequest:(SCD_Struct_GE94)arg1 client:(id)arg2 ;
@end

