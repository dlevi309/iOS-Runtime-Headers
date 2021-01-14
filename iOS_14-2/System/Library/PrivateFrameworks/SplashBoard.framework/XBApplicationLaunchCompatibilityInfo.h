/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class XBLaunchInterface, NSArray, NSString;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSSecureCoding> {

	XBLaunchInterface* _defaultInterface;
	BOOL _launchesOpaque;
	BOOL _hasKnownBadLaunchImage;
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
@property (assign,nonatomic) BOOL hasKnownBadLaunchImage;                                    //@synthesize hasKnownBadLaunchImage=_hasKnownBadLaunchImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)compatibilityInfoForAppInfo:(id)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(NSString *)defaultGroupIdentifier;
-(NSString *)bundlePath;
-(BOOL)launchesOpaque;
-(BOOL)allowsSavingLaunchImages;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setLaunchesOpaque:(BOOL)arg1 ;
-(id)launchInterfaceWithIdentifier:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasKnownBadLaunchImage;
-(id)launchInterfaceIdentifierForRequest:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setBundleContainerPath:(NSString *)arg1 ;
-(NSString *)bundleContainerPath;
-(void)setSandboxPath:(NSString *)arg1 ;
-(NSString *)sandboxPath;
-(NSArray *)launchInterfaces;
-(XBLaunchInterface *)defaultLaunchInterface;
-(void)setHasKnownBadLaunchImage:(BOOL)arg1 ;
-(void)_setLaunchInterfaces:(id)arg1 ;
-(void)setDefaultGroupIdentifier:(NSString *)arg1 ;
@end

