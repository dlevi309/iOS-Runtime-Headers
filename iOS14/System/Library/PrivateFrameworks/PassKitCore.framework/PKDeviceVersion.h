/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKDeviceVersion : NSObject <NSSecureCoding, NSCopying> {

	NSString* _deviceClass;
	NSString* _generation;
	NSString* _model;
	PKDeviceVersion* _companion;

}

@property (nonatomic,readonly) NSString * deviceClass;                   //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * generation;                    //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) NSString * model;                         //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) PKDeviceVersion * companion;              //@synthesize companion=_companion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fromCurrentDeviceVersion;
-(NSString *)generation;
-(NSString *)model;
-(id)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)deviceClass;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(PKDeviceVersion *)companion;
-(BOOL)isEqualToDeviceVersion:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

