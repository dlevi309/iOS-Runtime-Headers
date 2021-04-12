/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, NSString;

@interface CPLPlatform : NSObject {

	NSMapTable* _abstractClassToImplementation;
	NSObject*<OS_dispatch_queue> _lock;
	NSString* _suffix;

}

@property (nonatomic,copy) NSString * suffix;              //@synthesize suffix=_suffix - In the implementation block
+(void)setProxyImplementationForPlatform:(id)arg1 ;
+(void)setDefaultPlatform:(id)arg1 ;
+(id)defaultPlatform;
+(id)currentPlatform;
-(id)init;
-(NSString *)suffix;
-(id)description;
-(void)setSuffix:(NSString *)arg1 ;
-(void)setPlatformImplementation:(Class)arg1 forClass:(Class)arg2 ;
-(Class)implementationClassForAbstractClass:(Class)arg1 ;
-(id)newPlatformImplementationForObject:(id)arg1 ;
@end

