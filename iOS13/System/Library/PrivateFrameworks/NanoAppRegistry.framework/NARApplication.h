/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NARApplicationState, NSDictionary, NARGlance;

@interface NARApplication : NSObject <NSSecureCoding> {

	BOOL _supportsForegroundApplication;
	unsigned long long _sequenceNumber;
	NSString* _launchServicesBundleType;
	NSString* _parentApplicationBundleIdentifier;
	NSArray* _appTags;
	NARApplicationState* _appState;
	NSDictionary* _infoPlist;
	NSDictionary* _localizedStrings;
	NSDictionary* _iTunesPlistStrings;

}

@property (nonatomic,retain) NSDictionary * infoPlist;                                         //@synthesize infoPlist=_infoPlist - In the implementation block
@property (nonatomic,retain) NSDictionary * localizedStrings;                                  //@synthesize localizedStrings=_localizedStrings - In the implementation block
@property (nonatomic,retain) NSDictionary * iTunesPlistStrings;                                //@synthesize iTunesPlistStrings=_iTunesPlistStrings - In the implementation block
@property (nonatomic,retain) NSArray * appTags;                                                //@synthesize appTags=_appTags - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;                                //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * launchServicesBundleType;                                //@synthesize launchServicesBundleType=_launchServicesBundleType - In the implementation block
@property (assign,nonatomic) BOOL supportsForegroundApplication;                               //@synthesize supportsForegroundApplication=_supportsForegroundApplication - In the implementation block
@property (nonatomic,readonly) NSString * applicationIdentifier; 
@property (nonatomic,readonly) NSString * bundleName; 
@property (nonatomic,readonly) NSDictionary * localizedBundleNames; 
@property (nonatomic,readonly) NSString * bundleVersion; 
@property (nonatomic,readonly) NSString * localizedDisplayName; 
@property (nonatomic,readonly) NSDictionary * localizedDisplayNames; 
@property (nonatomic,readonly) NSArray * supportedSchemes; 
@property (nonatomic,readonly) NSString * vendorName; 
@property (nonatomic,readonly) NSString * itemName; 
@property (nonatomic,readonly) NSArray * localizations; 
@property (nonatomic,copy,readonly) NSString * parentApplicationBundleIdentifier;              //@synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isHidden; 
@property (nonatomic,readonly) NARGlance * glance; 
@property (nonatomic,retain) NARApplicationState * appState;                                   //@synthesize appState=_appState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)localizations;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(NARApplicationState *)appState;
-(NSString *)applicationIdentifier;
-(NSString *)bundleVersion;
-(NSArray *)appTags;
-(NSString *)vendorName;
-(NSString *)itemName;
-(NSString *)bundleName;
-(NSDictionary *)localizedStrings;
-(NSDictionary *)infoPlist;
-(BOOL)isHidden;
-(NSString *)localizedDisplayName;
-(void)setLocalizedStrings:(NSDictionary *)arg1 ;
-(NSString *)parentApplicationBundleIdentifier;
-(NARGlance *)glance;
-(NSArray *)supportedSchemes;
-(void)setInfoPlist:(NSDictionary *)arg1 ;
-(void)setAppState:(NARApplicationState *)arg1 ;
-(NSDictionary *)localizedDisplayNames;
-(NSDictionary *)localizedBundleNames;
-(NSDictionary *)iTunesPlistStrings;
-(BOOL)supportsForegroundApplication;
-(id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2 ;
-(NSString *)launchServicesBundleType;
-(void)setLaunchServicesBundleType:(NSString *)arg1 ;
-(void)setAppTags:(NSArray *)arg1 ;
-(void)setSupportsForegroundApplication:(BOOL)arg1 ;
-(void)setITunesPlistStrings:(NSDictionary *)arg1 ;
@end

