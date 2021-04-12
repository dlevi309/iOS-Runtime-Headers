/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class XBLaunchInterface, NSArray, NSString;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSSecureCoding> {

	XBLaunchInterface* _defaultInterface;
	BOOL _launchesOpaque;
	NSArray* _launchInterfaces;
	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _sandboxPath;
	NSString* _bundleContainerPath;
	NSString* _defaultGroupIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                            //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy) NSString * sandboxPath;                                           //@synthesize sandboxPath=_sandboxPath - In the implementation block
@property (nonatomic,copy) NSString * bundleContainerPath;                                   //@synthesize bundleContainerPath=_bundleContainerPath - In the implementation block
@property (nonatomic,copy) NSString * defaultGroupIdentifier;                                //@synthesize defaultGroupIdentifier=_defaultGroupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL launchesOpaque;                                            //@synthesize launchesOpaque=_launchesOpaque - In the implementation block
@property (nonatomic,copy,readonly) XBLaunchInterface * defaultLaunchInterface; 
@property (nonatomic,copy,readonly) NSArray * launchInterfaces;                              //@synthesize launchInterfaces=_launchInterfaces - In the implementation block
@property (nonatomic,readonly) BOOL allowsSavingLaunchImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)compatibilityInfoForAppInfo:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(id)initWithBundle:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setSandboxPath:(NSString *)arg1 ;
-(void)setBundleContainerPath:(NSString *)arg1 ;
-(void)setDefaultGroupIdentifier:(NSString *)arg1 ;
-(id)launchInterfaceWithIdentifier:(id)arg1 ;
-(XBLaunchInterface *)defaultLaunchInterface;
-(void)_setLaunchInterfaces:(id)arg1 ;
-(BOOL)allowsSavingLaunchImages;
-(id)launchInterfaceIdentifierForRequest:(id)arg1 ;
-(NSArray *)launchInterfaces;
-(NSString *)sandboxPath;
-(BOOL)launchesOpaque;
-(void)setLaunchesOpaque:(BOOL)arg1 ;
-(NSString *)bundleContainerPath;
-(NSString *)defaultGroupIdentifier;
@end

