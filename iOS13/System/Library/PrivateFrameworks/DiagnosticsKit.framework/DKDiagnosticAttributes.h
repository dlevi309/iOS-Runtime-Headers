/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <libobjc.A.dylib/DKExtensionAttributes.h>

@class NSExtension, NSString, NSNumber;

@interface DKDiagnosticAttributes : NSObject <DKExtensionAttributes> {

	BOOL _headless;
	BOOL _restricted;
	BOOL _requiresUnlock;
	NSExtension* _extension;
	NSString* _bundleIdentifier;
	NSNumber* _identifier;
	NSString* _name;
	NSString* _version;
	NSNumber* _freeSpaceRequired;

}

@property (nonatomic,readonly) NSNumber * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSNumber * freeSpaceRequired;                     //@synthesize freeSpaceRequired=_freeSpaceRequired - In the implementation block
@property (getter=isHeadless,nonatomic,readonly) BOOL headless;                  //@synthesize headless=_headless - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted;              //@synthesize restricted=_restricted - In the implementation block
@property (nonatomic,readonly) BOOL requiresUnlock;                              //@synthesize requiresUnlock=_requiresUnlock - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                          //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)name;
-(NSNumber *)identifier;
-(NSString *)bundleIdentifier;
-(NSString *)version;
-(BOOL)isRestricted;
-(NSExtension *)extension;
-(id)initWithExtension:(id)arg1 ;
-(BOOL)isHeadless;
-(id)initWithIdentifier:(id)arg1 version:(id)arg2 freeSpaceRequired:(id)arg3 name:(id)arg4 headless:(BOOL)arg5 ;
-(NSNumber *)freeSpaceRequired;
-(BOOL)requiresUnlock;
@end

