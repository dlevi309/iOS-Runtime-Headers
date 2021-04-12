/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)model;
-(NSString *)generation;
-(NSString *)deviceClass;
-(id)asDictionary;
-(BOOL)isEqualToDeviceVersion:(id)arg1 ;
-(PKDeviceVersion *)companion;
@end

