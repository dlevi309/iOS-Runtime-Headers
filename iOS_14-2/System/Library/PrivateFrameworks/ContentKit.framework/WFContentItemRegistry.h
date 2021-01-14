/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


#import <ContentKit/ContentKit-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSSet;

@interface WFContentItemRegistry : NSObject {

	os_unfair_lock_s _discoveryLock;
	NSMutableDictionary* _contentItemClassesByType;
	NSMutableSet* _allItemClasses;

}

@property (nonatomic,readonly) NSMutableDictionary * contentItemClassesByType;              //@synthesize contentItemClassesByType=_contentItemClassesByType - In the implementation block
@property (nonatomic,readonly) NSMutableSet * allItemClasses;                               //@synthesize allItemClasses=_allItemClasses - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s discoveryLock;                              //@synthesize discoveryLock=_discoveryLock - In the implementation block
@property (nonatomic,readonly) NSSet * contentItemClasses; 
@property (nonatomic,readonly) NSSet * allOwnedTypes; 
+(id)allContentItemClassesInActionKit;
+(id)allContentItemClassesInWorkflowKit;
+(id)sharedRegistry;
+(id)allContentItemClassesInContentKit;
-(os_unfair_lock_s)discoveryLock;
-(id)init;
-(id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 ;
-(NSSet *)contentItemClasses;
-(id)contentItemClassesSupportingType:(id)arg1 ;
-(Class)contentItemClassForType:(id)arg1 ;
-(void)rediscoverContentItemClassesIfNeeded;
-(void)registerContentItemClass:(Class)arg1 ;
-(NSSet *)allOwnedTypes;
-(NSMutableDictionary *)contentItemClassesByType;
-(NSMutableSet *)allItemClasses;
-(id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1 ;
@end

