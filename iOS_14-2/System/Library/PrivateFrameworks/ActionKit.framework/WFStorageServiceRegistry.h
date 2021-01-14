/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSArray, NSSet;

@interface WFStorageServiceRegistry : NSObject {

	NSArray* _registeredServices;

}

@property (nonatomic,readonly) NSArray * registeredServices;                     //@synthesize registeredServices=_registeredServices - In the implementation block
@property (nonatomic,readonly) NSArray * storageServices; 
@property (nonatomic,readonly) NSSet * objectRepresentationClasses; 
+(id)sharedRegistry;
+(void)registerStorageServiceClass:(Class)arg1 ;
+(void)registerAllActionKitStorageServiceClasses;
-(id)init;
-(NSArray *)storageServices;
-(NSSet *)objectRepresentationClasses;
-(id)storageServiceWithName:(id)arg1 ;
-(NSArray *)registeredServices;
@end

