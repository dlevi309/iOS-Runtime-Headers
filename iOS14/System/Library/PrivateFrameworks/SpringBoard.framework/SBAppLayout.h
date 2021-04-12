/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBSwitcherLayoutElementProviding.h>

@class NSDictionary, NSString;

@interface SBAppLayout : NSObject <NSCopying, BSDescriptionProviding, SBSwitcherLayoutElementProviding> {

	long long _cachedAppLayoutType;
	unsigned long long _cachedHash;
	BOOL _hidden;
	long long _configuration;
	long long _environment;
	NSDictionary* _rolesToLayoutItemsMap;

}

@property (nonatomic,readonly) long long configuration; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long environment;                                                    //@synthesize environment=_environment - In the implementation block
@property (getter=isInsetForHomeAffordance,nonatomic,readonly) BOOL insetForHomeAffordance; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden;                                              //@synthesize hidden=_hidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeScreenAppLayout;
+(id)appLayoutWithProtobufRepresentation:(id)arg1 ;
-(id)succinctDescription;
-(void)enumerate:(/*^block*/id)arg1 ;
-(long long)compare:(id)arg1 ;
-(BOOL)isHidden;
-(id)protobufRepresentation;
-(id)init;
-(id)allItems;
-(unsigned long long)frameOptions;
-(id)initWithItemsForLayoutRoles:(id)arg1 configuration:(long long)arg2 environment:(long long)arg3 hidden:(BOOL)arg4 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)containsItemWithBundleIdentifier:(id)arg1 ;
-(BOOL)containsItemWithUniqueIdentifier:(id)arg1 ;
-(id)itemForLayoutRole:(long long)arg1 ;
-(BOOL)isInsetForHomeAffordance;
-(id)appLayoutWithItemsPassingTest:(/*^block*/id)arg1 ;
-(NSString *)description;
-(long long)configuration;
-(long long)layoutRoleForItem:(id)arg1 ;
-(id)appLayoutByModifyingHiddenState:(BOOL)arg1 ;
-(long long)type;
-(id)plistRepresentation;
-(unsigned long long)hash;
-(BOOL)containsAnyItemFromSet:(id)arg1 ;
-(long long)environment;
-(unsigned long long)switcherLayoutElementType;
-(id)initWithItemsForLayoutRoles:(id)arg1 configuration:(long long)arg2 environment:(long long)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)containsItem:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithPlistRepresentation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

