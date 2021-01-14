/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableArray, NSObject, NSArray;

@interface INImageServiceRegistry : NSObject {

	NSMutableDictionary* _imageServicesByServiceIdentifier;
	NSMutableArray* _prioritySortedImageServices;
	NSObject*<OS_dispatch_queue> _registryQueue;

}

@property (nonatomic,copy,readonly) NSArray * imageLoaders; 
@property (nonatomic,copy,readonly) NSArray * imageStorageServices; 
@property (nonatomic,copy,readonly) NSArray * imageServices; 
+(id)sharedInstance;
-(NSArray *)imageServices;
-(NSArray *)imageLoaders;
-(id)init;
-(void)registerImageService:(id)arg1 ;
-(void)unregisterImageService:(id)arg1 ;
-(void)_reprioritizeImageServices;
-(id)imageServiceForServiceIdentifier:(id)arg1 ;
-(id)imageLoaderForServiceIdentifier:(id)arg1 ;
-(NSArray *)imageStorageServices;
-(id)imageStorageServiceForServiceIdentifier:(id)arg1 ;
@end

