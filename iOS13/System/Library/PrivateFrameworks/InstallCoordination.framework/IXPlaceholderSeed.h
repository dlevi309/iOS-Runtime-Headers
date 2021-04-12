/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)installType;
-(NSString *)bundleID;
-(NSString *)bundleName;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(void)setInstallType:(unsigned long long)arg1 ;
-(Class)clientPromiseClass;
-(BOOL)isPlugin;
-(void)setIsPlugin:(BOOL)arg1 ;
@end

