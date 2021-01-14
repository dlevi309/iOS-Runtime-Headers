/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray, NSMutableArray, NSMapTable, _UIAppearanceCustomizableClassInfo;

@interface _UIAppearance : NSObject {

	NSArray* _containerList;
	NSMutableArray* _appearanceInvocations;
	NSMapTable* _invocationSources;
	_UIAppearanceCustomizableClassInfo* _customizableClassInfo;

}

@property (nonatomic,readonly) _UIAppearanceCustomizableClassInfo * _customizableClassInfo;              //@synthesize customizableClassInfo=_customizableClassInfo - In the implementation block
+(id)recursiveDescription;
+(id)_rootAppearancesNode;
+(id)_recordersExcludingSource:(id)arg1 withWindow:(id)arg2 ;
+(id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2 ;
+(id)_appearanceNodeForClassInfo:(id)arg1 containerList:(id)arg2 ;
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 ;
+(void)_setInvalidatesViewsOnAppearanceChange:(BOOL)arg1 ;
+(void)_removeWindow:(id)arg1 forSource:(id)arg2 ;
+(id)_currentAppearanceSource;
+(void)_addWindow:(id)arg1 forSource:(id)arg2 ;
+(id)appearancesAtNode:(id)arg1 withObject:(id)arg2 ;
+(BOOL)_hasAnyCustomizations;
+(void)_appendDescriptionOfNode:(id)arg1 toString:(id)arg2 atLevel:(unsigned long long)arg3 ;
+(id)_appearanceWithClassInfo:(id)arg1 containerList:(id)arg2 ;
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 onlySystemInvocations:(BOOL)arg4 ;
+(void)_setCurrentAppearanceSource:(id)arg1 ;
+(BOOL)_hasCustomizationsForClass:(Class)arg1 guideClass:(Class)arg2 ;
+(id)_newAppearanceWithClassInfo:(id)arg1 containerList:(id)arg2 ;
+(id)_windowsForSource:(id)arg1 ;
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 ;
+(id)_pendingRecordInvocationsForSource:(id)arg1 ;
+(id)_recorderForSource:(id)arg1 ;
+(void)_removeInvocationsForSource:(id)arg1 ;
-(id)_traitCollection;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(unsigned long long)arg2 ;
-(void)_invalidateAppearanceInWindow:(id)arg1 ;
-(id)_appearanceInvocations;
-(void)_handleGetterInvocation:(id)arg1 ;
-(void)_handleSetterInvocation:(id)arg1 ;
-(id)description;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(_UIAppearanceCustomizableClassInfo *)_customizableClassInfo;
-(SEL)_beginListeningForAppearanceEventsForSetter:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)_isRecordingInvocations;
-(void)dealloc;
-(void)_removeInvocationsForSource:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

