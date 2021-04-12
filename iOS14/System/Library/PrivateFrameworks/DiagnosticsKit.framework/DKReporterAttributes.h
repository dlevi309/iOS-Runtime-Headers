/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/DKExtensionAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSExtension, NSString, NSSet, NSUUID;

@interface DKReporterAttributes : NSObject <DKExtensionAttributes, NSCopying> {

	BOOL _headless;
	NSExtension* _extension;
	NSString* _bundleIdentifier;
	NSString* _name;
	NSString* _version;
	NSSet* _manifest;
	NSUUID* _uuid;

}

@property (nonatomic,retain) NSUUID * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSSet * manifest;                             //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                      //@synthesize extension=_extension - In the implementation block
@property (getter=isHeadless,nonatomic,readonly) BOOL headless;              //@synthesize headless=_headless - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSUUID *)uuid;
-(NSString *)bundleIdentifier;
-(BOOL)isHeadless;
-(id)initWithExtension:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSSet *)manifest;
-(NSExtension *)extension;
-(unsigned long long)hash;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_validateAndAddDomain:(id)arg1 withInfo:(id)arg2 toManifest:(id)arg3 ;
-(void)_validateAndAddExtensionManifest:(id)arg1 toManifest:(id)arg2 ;
-(BOOL)isEqualToReportGeneratorAttributes:(id)arg1 ;
@end

