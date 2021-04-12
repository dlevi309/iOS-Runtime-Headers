/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKPaymentMarketGeoFence.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLCircularRegion, NSUUID, NSString;

@interface PKPaymentMarketCircularGeoFence : NSObject <PKPaymentMarketGeoFence, NSSecureCoding> {

	CLCircularRegion* _circle;
	NSUUID* _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(double)distanceFromLocation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)containsLocation:(id)arg1 ;
@end

