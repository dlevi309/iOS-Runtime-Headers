/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSMapTable;

@interface TMLAspectsRegistration : NSObject {

	NSMapTable* _registeredAspects;

}
+(id)shared;
+(id)keysForObject:(id)arg1 withMetaObjects:(id)arg2 signalName:(id)arg3 advice:(int)arg4 ;
+(id)keyForClassNamed:(id)arg1 signalName:(id)arg2 advice:(int)arg3 ;
+(id)keyForProtocolNamed:(id)arg1 signalName:(id)arg2 advice:(int)arg3 ;
-(id)init;
-(id)storageForKey:(id)arg1 createIfMissing:(BOOL)arg2 ;
-(id)aspectsWithKey:(id)arg1 ;
-(id)strongAspectsFromArray:(id)arg1 ;
-(id)aspectsWithKeys:(id)arg1 ;
-(void)registerAspect:(id)arg1 withKey:(id)arg2 ;
-(void)unregisterAspect:(id)arg1 withKey:(id)arg2 ;
-(id)aspectsForObject:(id)arg1 signalName:(id)arg2 advice:(int)arg3 ;
@end

