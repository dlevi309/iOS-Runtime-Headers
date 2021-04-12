/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MBDomainInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _systemApp;
	BOOL _enabled;
	BOOL _restricted;
	NSString* _domainName;
	unsigned long long _remoteSize;
	unsigned long long _localSize;

}

@property (getter=isAppDomain,nonatomic,readonly) BOOL appDomain; 
@property (assign,getter=isSystemApp,nonatomic) BOOL systemApp;                              //@synthesize systemApp=_systemApp - In the implementation block
@property (getter=isCameraRollDomain,nonatomic,readonly) BOOL cameraRollDomain; 
@property (nonatomic,retain) NSString * domainName;                                          //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) unsigned long long size; 
@property (assign,nonatomic) unsigned long long remoteSize;                                  //@synthesize remoteSize=_remoteSize - In the implementation block
@property (assign,nonatomic) unsigned long long localSize;                                   //@synthesize localSize=_localSize - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;                            //@synthesize restricted=_restricted - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)domainInfoWithName:(id)arg1 systemApp:(BOOL)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(BOOL)arg5 restricted:(BOOL)arg6 ;
+(id)domainNameForBundleID:(id)arg1 ;
-(BOOL)isRestricted;
-(NSString *)domainName;
-(void)setDomainName:(NSString *)arg1 ;
-(unsigned long long)localSize;
-(void)setRestricted:(BOOL)arg1 ;
-(id)initWithDomainName:(id)arg1 systemApp:(BOOL)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(BOOL)arg5 restricted:(BOOL)arg6 ;
-(unsigned long long)size;
-(void)setRemoteSize:(unsigned long long)arg1 ;
-(void)setLocalSize:(unsigned long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSystemApp:(BOOL)arg1 ;
-(BOOL)isSystemApp;
-(unsigned long long)remoteSize;
-(id)description;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isAppDomain;
-(BOOL)isCameraRollDomain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

