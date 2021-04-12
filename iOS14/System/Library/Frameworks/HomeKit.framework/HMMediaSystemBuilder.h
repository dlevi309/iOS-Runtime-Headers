/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>

@class HMFUnfairLock, NSArray, NSString, _HMContext, NSUUID, HMHome, HMMediaSystem, HMMutableArray, HMFActivity;

@interface HMMediaSystemBuilder : NSObject <HMFLogging> {

	HMFUnfairLock* _lock;
	NSArray* _components;
	NSString* _name;
	NSString* _configuredName;
	_HMContext* _context;
	NSUUID* _uuid;
	NSUUID* _mediaSystemUUID;
	NSString* _builderSessionID;
	HMHome* _home;
	HMMediaSystem* _mediaSystem;
	HMMutableArray* _componentsArray;
	HMFActivity* _activity;

}

@property (nonatomic,retain) _HMContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * mediaSystemUUID;                    //@synthesize mediaSystemUUID=_mediaSystemUUID - In the implementation block
@property (nonatomic,retain) NSString * builderSessionID;                   //@synthesize builderSessionID=_builderSessionID - In the implementation block
@property (nonatomic,__weak,readonly) HMHome * home;                        //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMMediaSystem * mediaSystem;                 //@synthesize mediaSystem=_mediaSystem - In the implementation block
@property (nonatomic,retain) HMMutableArray * componentsArray;              //@synthesize componentsArray=_componentsArray - In the implementation block
@property (readonly) HMFActivity * activity;                                //@synthesize activity=_activity - In the implementation block
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * configuredName;                       //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,copy) NSArray * components;                            //@synthesize components=_components - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)isStereoPairingSupportedForAccessories:(id)arg1 ;
+(BOOL)supportsMediaSystem:(id)arg1 ;
+(BOOL)canSupportMediaSystem:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setComponents:(NSArray *)arg1 ;
-(HMMutableArray *)componentsArray;
-(void)setConfiguredName:(NSString *)arg1 ;
-(void)setComponentsArray:(HMMutableArray *)arg1 ;
-(id)init;
-(HMFActivity *)activity;
-(id)logIdentifier;
-(_HMContext *)context;
-(NSString *)name;
-(NSArray *)components;
-(NSString *)description;
-(NSString *)configuredName;
-(id)initWithHome:(id)arg1 ;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)_initializeContext;
-(void)_commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)builderSessionID;
-(void)setBuilderSessionID:(NSString *)arg1 ;
-(NSUUID *)mediaSystemUUID;
-(HMMediaSystem *)mediaSystem;
-(void)_callCompletion:(/*^block*/id)arg1 builderSessionID:(id)arg2 error:(id)arg3 response:(id)arg4 ;
-(id)initWithMediaSystem:(id)arg1 ;
-(void)dealloc;
-(HMHome *)home;
-(void)setContext:(_HMContext *)arg1 ;
@end

