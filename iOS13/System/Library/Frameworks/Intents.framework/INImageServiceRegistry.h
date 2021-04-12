/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface INImageServiceRegistry : NSObject {

	NSMutableDictionary* _imageServicesByServiceIdentifier;
	NSMutableArray* _prioritySortedImageServices;

}

@property (nonatomic,copy,readonly) NSArray * imageLoaders; 
@property (nonatomic,copy,readonly) NSArray * imageStorageServices; 
@property (nonatomic,copy,readonly) NSArray * imageServices; 
+(id)sharedInstance;
-(id)init;
-(void)registerImageService:(id)arg1 ;
-(void)unregisterImageService:(id)arg1 ;
-(void)_reprioritizeImageServices;
-(NSArray *)imageServices;
-(id)imageServiceForServiceIdentifier:(id)arg1 ;
-(NSArray *)imageLoaders;
-(id)imageLoaderForServiceIdentifier:(id)arg1 ;
-(NSArray *)imageStorageServices;
-(id)imageStorageServiceForServiceIdentifier:(id)arg1 ;
@end

