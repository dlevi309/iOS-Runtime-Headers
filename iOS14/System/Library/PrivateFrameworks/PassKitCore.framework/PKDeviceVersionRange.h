/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface PKDeviceVersionRange : NSObject <NSSecureCoding, NSCopying> {

	NSString* _minimum;
	NSString* _maximum;
	NSArray* _models;
	PKDeviceVersionRange* _companion;

}

@property (nonatomic,readonly) NSString * minimum;                            //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) NSString * maximum;                            //@synthesize maximum=_maximum - In the implementation block
@property (nonatomic,readonly) NSArray * models;                              //@synthesize models=_models - In the implementation block
@property (nonatomic,readonly) PKDeviceVersionRange * companion;              //@synthesize companion=_companion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)maximum;
-(NSString *)minimum;
-(id)asDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)models;
-(id)description;
-(BOOL)isEqualToDeviceVersionRange:(id)arg1 ;
-(BOOL)_matchesDeviceVersion:(id)arg1 ;
-(PKDeviceVersionRange *)companion;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

