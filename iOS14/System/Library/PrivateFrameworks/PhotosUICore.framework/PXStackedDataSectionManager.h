/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXDataSectionManager.h>
#import <libobjc.A.dylib/PXDataSectionManagerEnabling.h>

@class NSString;

@interface PXStackedDataSectionManager : PXDataSectionManager <PXDataSectionManagerEnabling> {

	BOOL _enabled;
	BOOL _alwaysContainsObjects;
	id _additionalStorage;

}

@property (assign,nonatomic) BOOL alwaysContainsObjects;                 //@synthesize alwaysContainsObjects=_alwaysContainsObjects - In the implementation block
@property (nonatomic,retain) id additionalStorage;                       //@synthesize additionalStorage=_additionalStorage - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEnabled:(BOOL)arg1 ;
-(id)createDataSection;
-(id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3 ;
-(void)setAdditionalStorage:(id)arg1 ;
-(void)setAlwaysContainsObjects:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
-(id)additionalStorage;
-(id)childDataSectionManagerForObjectAtIndex:(long long)arg1 localIndex:(long long*)arg2 ;
-(BOOL)_updateDataSectionIfNecessary;
-(BOOL)isDataSectionEmpty;
-(id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1 ;
-(BOOL)alwaysContainsObjects;
-(id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2 ;
@end

