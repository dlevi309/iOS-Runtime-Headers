/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/


@interface SAClassRegistry : NSObject
+(void)initialize;
+(void)registerAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2 ;
+(Class)classForAceClassName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
+(void)registerClass:(Class)arg1 forAceClassName:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
+(id)sharedClassRegistry;
-(void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
-(Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
@end

