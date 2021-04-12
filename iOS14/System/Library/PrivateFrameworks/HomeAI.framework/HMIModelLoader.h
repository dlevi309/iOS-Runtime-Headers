/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSString;

@interface HMIModelLoader : HMFObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _pendingUpdates;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingUpdates;                   //@synthesize pendingUpdates=_pendingUpdates - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedInstance;
+(id)assetDirectoryPath;
-(id)init;
-(NSMutableSet *)pendingUpdates;
-(void)setPendingUpdates:(NSMutableSet *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)unpackageModelAssets:(id)arg1 intoDirectory:(id)arg2 error:(id*)arg3 ;
-(id)unpackageModelAssetsAtPath:(id)arg1 error:(id*)arg2 ;
@end

