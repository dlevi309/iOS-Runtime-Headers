/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXFeatureSpec, PXExtendedTraitCollection, NSString;

@interface PXFeatureSpecManager : PXObservable <PXChangeObserver> {

	PXFeatureSpec* _spec;
	PXExtendedTraitCollection* _extendedTraitCollection;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long defaultChangesToUpdateFor; 
@property (nonatomic,readonly) PXExtendedTraitCollection * extendedTraitCollection;              //@synthesize extendedTraitCollection=_extendedTraitCollection - In the implementation block
@property (nonatomic,readonly) PXFeatureSpec * spec;                                             //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                       //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithExtendedTraitCollection:(id)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(unsigned long long)defaultChangesToUpdateFor;
-(void)invalidateSpec;
-(unsigned long long)options;
-(void)_setSpec:(id)arg1 ;
-(PXFeatureSpec *)spec;
-(id)createSpec;
-(id)mutableChangeObject;
-(PXExtendedTraitCollection *)extendedTraitCollection;
-(Class)specClass;
-(void)_updateSpec;
-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

