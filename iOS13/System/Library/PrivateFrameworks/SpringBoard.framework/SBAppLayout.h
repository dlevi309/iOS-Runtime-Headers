/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSDictionary, NSString;

@interface SBAppLayout : NSObject <NSCopying, BSDescriptionProviding> {

	long long _cachedAppLayoutType;
	BOOL _hidden;
	long long _configuration;
	long long _environment;
	NSDictionary* _rolesToLayoutItemsMap;

}

@property (nonatomic,copy) NSDictionary * rolesToLayoutItemsMap;                                         //@synthesize rolesToLayoutItemsMap=_rolesToLayoutItemsMap - In the implementation block
@property (assign,nonatomic) long long configuration;                                                    //@synthesize configuration=_configuration - In the implementation block
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)enumerate:(/*^block*/id)arg1 ;
-(long long)compare:(id)arg1 ;
-(long long)environment;
-(BOOL)isHidden;
-(void)setConfiguration:(long long)arg1 ;
-(long long)configuration;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)containsItem:(id)arg1 ;
-(id)allItems;
-(id)initWithPlistRepresentation:(id)arg1 ;
-(unsigned long long)frameOptions;
-(id)plistRepresentation;
-(BOOL)isInsetForHomeAffordance;
-(id)protobufRepresentation;
-(id)itemForLayoutRole:(long long)arg1 ;
-(BOOL)containsItemWithUniqueIdentifier:(id)arg1 ;
-(BOOL)containsItemWithBundleIdentifier:(id)arg1 ;
-(id)initWithItemsForLayoutRoles:(id)arg1 configuration:(long long)arg2 environment:(long long)arg3 ;
-(id)appLayoutWithItemsPassingTest:(/*^block*/id)arg1 ;
-(id)appLayoutByModifyingHiddenState:(BOOL)arg1 ;
-(BOOL)containsAnyItemFromSet:(id)arg1 ;
-(id)initWithItemsForLayoutRoles:(id)arg1 configuration:(long long)arg2 environment:(long long)arg3 hidden:(BOOL)arg4 ;
-(long long)layoutRoleForItem:(id)arg1 ;
-(NSDictionary *)rolesToLayoutItemsMap;
-(void)setRolesToLayoutItemsMap:(NSDictionary *)arg1 ;
@end

