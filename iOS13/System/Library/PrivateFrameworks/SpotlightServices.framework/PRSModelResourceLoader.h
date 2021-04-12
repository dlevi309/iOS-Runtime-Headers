/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@protocol OS_dispatch_queue;
#import <SpotlightServices/SpotlightServices-Structs.h>
@class NSObject, NSMutableSet;

@interface PRSModelResourceLoader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _pendingUpdates;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingUpdates;                   //@synthesize pendingUpdates=_pendingUpdates - In the implementation block
+(id)sharedInstance;
+(id)resourceDirectoryPathForType:(unsigned long long)arg1 forUpdate:(BOOL)arg2 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setPendingUpdates:(NSMutableSet *)arg1 ;
-(NSMutableSet *)pendingUpdates;
-(BOOL)hasPendingUpdates;
-(void)unpackageModelResources:(id)arg1 type:(unsigned long long)arg2 ;
-(void)markResourcesAsRemovable:(unsigned long long)arg1 ;
-(int)checkHeader:(prs_model_resource_header*)arg1 ;
-(int)unpackageLZMATarData:(void*)arg1 size:(unsigned long long)arg2 parentDir:(const char*)arg3 ;
-(void)removeResourcesForType:(unsigned long long)arg1 group:(id)arg2 ;
-(void)unpackageModelResources:(id)arg1 type:(unsigned long long)arg2 intoDirectory:(id)arg3 group:(id)arg4 ;
-(void)removeDeprecatedResources;
-(BOOL)_loadArchivedResources:(id)arg1 parentPath:(id)arg2 ;
-(void)markResourcesAsRemovable:(unsigned long long)arg1 group:(id)arg2 ;
-(void)removeResourcesForType:(unsigned long long)arg1 ;
-(id)metadataForResourceType:(unsigned long long)arg1 ;
-(void)unpackageModelResources:(id)arg1 type:(unsigned long long)arg2 group:(id)arg3 ;
-(void)moveNewlyPackagedResources:(id)arg1 ;
@end

