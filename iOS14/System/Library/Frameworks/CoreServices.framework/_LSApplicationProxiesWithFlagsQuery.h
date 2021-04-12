/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/_LSBundleQuery.h>

@interface _LSApplicationProxiesWithFlagsQuery : _LSBundleQuery {

	unsigned _plistFlags;
	unsigned long long _bundleFlags;

}

@property (nonatomic,readonly) unsigned plistFlags;                         //@synthesize plistFlags=_plistFlags - In the implementation block
@property (nonatomic,readonly) unsigned long long bundleFlags;              //@synthesize bundleFlags=_bundleFlags - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)queryWithPlistFlags:(unsigned)arg1 bundleFlags:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
-(unsigned long long)bundleFlags;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)plistFlags;
-(BOOL)isEqual:(id)arg1 ;
@end

