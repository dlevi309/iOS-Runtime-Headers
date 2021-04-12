/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
*/

#import <InstallCoordination/InstallCoordination-Structs.h>
#import <InstallCoordination/IXOwnedDataPromiseSeed.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying> {

	BOOL _isPlugin;
	NSString* _bundleName;
	NSString* _bundleID;
	unsigned long long _installType;

}

@property (nonatomic,copy) NSString * bundleName;                         //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) unsigned long long installType;              //@synthesize installType=_installType - In the implementation block
@property (assign,nonatomic) BOOL isPlugin;                               //@synthesize isPlugin=_isPlugin - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)installType;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleName;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(void)setInstallType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(BOOL)isPlugin;
-(Class)clientPromiseClass;
-(void)setIsPlugin:(BOOL)arg1 ;
@end

