/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/


@interface SAClassRegistry : NSObject
+(void)initialize;
+(void)registerClass:(Class)arg1 forAceClassName:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
+(id)sharedClassRegistry;
+(void)registerAcronym:(id)arg1 forGroupWithIdentifier:(id)arg2 ;
+(Class)classForAceClassName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
-(void)registerClass:(Class)arg1 forAceClassWithName:(id)arg2 inGroupWithIdentifier:(id)arg3 ;
-(Class)classForAceClassWithName:(id)arg1 inGroupWithIdentifier:(id)arg2 ;
@end

