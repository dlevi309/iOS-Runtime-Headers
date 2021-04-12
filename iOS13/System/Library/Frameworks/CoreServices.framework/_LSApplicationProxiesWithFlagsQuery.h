/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)plistFlags;
-(unsigned long long)bundleFlags;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
@end

