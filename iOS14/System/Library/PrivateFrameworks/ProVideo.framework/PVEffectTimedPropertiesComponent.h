/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVEffectComponent.h>
#import <libobjc.A.dylib/PVEffectTimedProperties.h>

@class NSMutableSet, PVEffect;

@interface PVEffectTimedPropertiesComponent : NSObject <PVEffectComponent, PVEffectTimedProperties> {

	NSMutableSet* _delegateWrappers;
	unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> >* _delegateCollectionLock;
	PVEffect* _effect;

}

@property (assign,nonatomic,__weak) PVEffect * effect;              //@synthesize effect=_effect - In the implementation block
-(void)setEffect:(PVEffect *)arg1 ;
-(PVEffect *)effect;
-(id)initWithEffect:(id)arg1 ;
-(void)removeAllTimedPropertiesDelegates;
-(void)addTimedPropertiesDelegate:(id)arg1 userContext:(id)arg2 ;
-(BOOL)hasTimedPropertiesDelegates;
-(void)didLoad:(BOOL)arg1 ;
-(void)didUnload;
-(void)updateProperties:(id)arg1 allProperties:(id)arg2 ;
-(BOOL)applyTimedPropertiesForTime:(SCD_Struct_PV22)arg1 ;
-(void)removeTimedPropertiesDelegate:(id)arg1 ;
-(id)timedPropertiesDelegates;
-(BOOL)hasTimedPropertiesDelegate:(id)arg1 ;
-(id)userContextForTimedPropertiesDelegate:(id)arg1 ;
-(BOOL)addTimedPropertiesToDict:(id)arg1 time:(SCD_Struct_PV22)arg2 ;
-(void)addTimedPropertiesDelegateWrapper:(id)arg1 ;
-(id)delegateWrappers;
@end

