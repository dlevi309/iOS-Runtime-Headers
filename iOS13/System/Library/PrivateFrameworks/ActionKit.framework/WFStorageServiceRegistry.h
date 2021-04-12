/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSArray;

@interface WFStorageServiceRegistry : NSObject {

	NSArray* _registeredServices;

}

@property (nonatomic,readonly) NSArray * registeredServices;              //@synthesize registeredServices=_registeredServices - In the implementation block
@property (nonatomic,readonly) NSArray * storageServices; 
+(id)sharedRegistry;
+(void)registerStorageServiceClass:(Class)arg1 ;
+(void)registerAllActionKitStorageServiceClasses;
-(id)init;
-(NSArray *)storageServices;
-(id)storageServiceWithName:(id)arg1 ;
-(NSArray *)registeredServices;
@end

