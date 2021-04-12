/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDiscoveryTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKDiscoveryLocationTrigger : PKDiscoveryTrigger <NSSecureCoding, NSCopying> {

	double _longitude;
	double _latitude;
	double _radius;

}

@property (nonatomic,readonly) double longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double radius;                 //@synthesize radius=_radius - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)radius;
-(double)latitude;
-(double)longitude;
@end

