/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SBDisplayItem : NSObject <NSCopying, BSDescriptionProviding> {

	NSString* _uniqueStringRepresentation;
	/*^block*/id _sceneIdentifierFromBundleIdentifierGenerator;
	long long _type;
	NSString* _bundleIdentifier;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,readonly) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * webClipIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)displayItemWithType:(long long)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 ;
+(id)homeScreenDisplayItem;
+(id)remoteAlertDisplayItemWithServiceBundleIdentifier:(id)arg1 ;
+(id)switcherServiceDisplayItemWithServiceIdentifier:(id)arg1 ;
+(id)webAppDisplayItemWithWebAppIdentifier:(id)arg1 ;
+(id)applicationDisplayItemWithBundleIdentifier:(id)arg1 sceneIdentifier:(id)arg2 ;
+(id)displayItemWithProtobufRepresentation:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(long long)compare:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)uniqueIdentifier;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithPlistRepresentation:(id)arg1 ;
-(id)plistRepresentation;
-(id)initWithType:(long long)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(id)uniqueStringRepresentation;
-(id)_calculateUniqueStringRepresentation;
-(id)_initWithPlistRepresentation:(id)arg1 sceneIdentifierFromBundleIdentifierGenerator:(/*^block*/id)arg2 ;
-(id)_initWithDictionaryPlistRepresentation:(id)arg1 ;
-(id)_initWithArrayPlistRepresentation:(id)arg1 ;
-(id)_newSceneIdentifierForBundleIdentifier:(id)arg1 ;
-(id)_initWithLegacyPlistRepresentation:(id)arg1 sceneIdentifierFromBundleIdentifierGenerator:(/*^block*/id)arg2 ;
-(NSString *)webClipIdentifier;
-(id)initWithLegacyPlistRepresentation:(id)arg1 ;
-(id)protobufRepresentation;
-(BOOL)isHomeScreenDisplayItem;
@end

