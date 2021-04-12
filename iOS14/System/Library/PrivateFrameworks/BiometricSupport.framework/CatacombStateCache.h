/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {

	NSMutableDictionary* _cachedStates;

}
-(id)init;
-(void)removeUser:(unsigned)arg1 ;
-(void)reset;
-(int)addUserStatesFromBuffer:(id)arg1 ;
-(id)cachedComponents;
-(id)cachedUserComponents;
-(unsigned)stateOfComponent:(id)arg1 ;
-(unsigned)stateOfMasterComponent;
-(unsigned)stateOfUserComponent:(unsigned)arg1 ;
@end

