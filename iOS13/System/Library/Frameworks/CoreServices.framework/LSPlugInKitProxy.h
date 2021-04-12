/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSDate, LSBundleProxy, NSNumber, NSDictionary, LSExtensionPoint;

@interface LSPlugInKitProxy : LSBundleProxy <NSSecureCoding> {

	unsigned _platform;
	BOOL _onSystemPartition;
	NSString* _signerOrganization;
	NSString* _pluginIdentifier;
	NSString* _originalIdentifier;
	NSString* _protocol;
	NSUUID* _pluginUUID;
	NSDate* _registrationDate;
	LSBundleProxy* _containingBundle;

}

@property (nonatomic,readonly) NSString * pluginIdentifier;                                    //@synthesize pluginIdentifier=_pluginIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * originalIdentifier;                                  //@synthesize originalIdentifier=_originalIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * protocol;                                            //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSNumber * platform; 
@property (nonatomic,readonly) NSUUID * pluginUUID;                                            //@synthesize pluginUUID=_pluginUUID - In the implementation block
@property (nonatomic,readonly) NSDictionary * pluginKitDictionary; 
@property (nonatomic,readonly) NSDictionary * infoPlist; 
@property (nonatomic,readonly) NSDate * registrationDate;                                      //@synthesize registrationDate=_registrationDate - In the implementation block
@property (nonatomic,readonly) LSBundleProxy * containingBundle;                               //@synthesize containingBundle=_containingBundle - In the implementation block
@property (getter=isOnSystemPartition,nonatomic,readonly) BOOL onSystemPartition;              //@synthesize onSystemPartition=_onSystemPartition - In the implementation block
@property (nonatomic,readonly) NSString * teamID; 
@property (nonatomic,readonly) BOOL pluginCanProvideIcon; 
@property (nonatomic,readonly) LSExtensionPoint * extensionPoint; 
+(BOOL)supportsSecureCoding;
+(id)pluginKitProxyForUUID:(id)arg1 ;
+(id)plugInKitProxyForUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6 ;
+(id)pluginKitProxyForURL:(id)arg1 ;
+(id)pluginKitProxyForIdentifier:(id)arg1 ;
+(id)containingBundleIdentifiersForPlugInBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
+(id)plugInKitProxyForPlugin:(unsigned)arg1 withContext:(LSContext*)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)protocol;
-(NSString *)teamID;
-(NSString *)pluginIdentifier;
-(id)_managedPersonas;
-(id)iconDataForVariant:(int)arg1 withOptions:(int)arg2 ;
-(BOOL)_usesSystemPersona;
-(BOOL)profileValidated;
-(BOOL)UPPValidated;
-(NSNumber *)platform;
-(id)signerOrganization;
-(id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(BOOL)arg2 ;
-(id)_initWithPlugin:(unsigned)arg1 andContext:(LSContext*)arg2 ;
-(NSString *)originalIdentifier;
-(id)_initWithUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6 ;
-(LSBundleProxy *)containingBundle;
-(NSUUID *)pluginUUID;
-(id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 inScope:(unsigned long long)arg3 ;
-(NSDictionary *)pluginKitDictionary;
-(NSDictionary *)infoPlist;
-(BOOL)pluginCanProvideIcon;
-(LSExtensionPoint *)extensionPoint;
-(id)boundIconsDictionary;
-(NSDate *)registrationDate;
-(BOOL)isOnSystemPartition;
-(id)_valueForEqualityTesting;
@end

