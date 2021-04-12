/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDChangePropagationMap.h>

@protocol TSDChangePropagationMap <NSObject>
@required
-(id)prototypeChangeForPrototype:(id)arg1;

@end


@class TSUNoCopyDictionary, NSMutableSet, NSString;

@interface TSDChangePropagationMap : NSObject <TSDChangePropagationMap> {

	TSUNoCopyDictionary* mDictionary;
	NSMutableSet* mClassesOfChangedPrototypes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)p_addClassesForPrototype:(id)arg1 ;
-(void)recordOldValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3 ;
-(void)recordNewValueForModifyChangeForPrototype:(id)arg1 property:(int)arg2 newBoxedValue:(id)arg3 ;
-(id)prototypeChangeForPrototype:(id)arg1 ;
-(void)recordReplacementChangeForPrototype:(id)arg1 replacement:(id)arg2 ;
-(void)recordModifyChangeForPrototype:(id)arg1 property:(int)arg2 oldBoxedValue:(id)arg3 newBoxedValue:(id)arg4 ;
-(void)recordDeleteChangeForPrototype:(id)arg1 replacement:(id)arg2 ;
-(BOOL)hasAnyChangesForPrototypesOfClasses:(id)arg1 ;
-(id)prototypePassingTest:(/*^block*/id)arg1 ;
@end

