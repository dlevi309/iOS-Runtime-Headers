/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSBundleQuery.h>

@interface _LSBundleProxiesOfTypeQuery : _LSBundleQuery {

	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)queryWithType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)bundleUnitMeetsRequirements:(unsigned)arg1 bundleData:(const LSBundleData*)arg2 context:(LSContext*)arg3 ;
-(unsigned long long)type;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

