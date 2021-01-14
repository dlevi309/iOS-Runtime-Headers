/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXDataSectionManagerChangeObserver.h>

@protocol NSObjectNSCopying;
@class PXDataSection, NSArray, PXArrayChangeDetails, NSString;

@interface PXDataSectionManager : PXObservable <PXDataSectionManagerChangeObserver> {

	PXDataSection* _dataSection;
	NSArray* _childDataSectionManagers;
	id<NSObject><NSCopying> _outlineObject;
	PXArrayChangeDetails* _changeDetailsFromPreviousDataSection;
	PXDataSection* _previousDataSection;
	unsigned long long _previousDataSectionIdentifier;

}

@property (nonatomic,copy) NSArray * childDataSectionManagers;                                                //@synthesize childDataSectionManagers=_childDataSectionManagers - In the implementation block
@property (nonatomic,retain) id<NSObject><NSCopying> outlineObject;                                           //@synthesize outlineObject=_outlineObject - In the implementation block
@property (nonatomic,readonly) PXDataSection * dataSection; 
@property (nonatomic,readonly) PXDataSection * dataSectionIfCreated; 
@property (nonatomic,readonly) PXArrayChangeDetails * changeDetailsFromPreviousDataSection;                   //@synthesize changeDetailsFromPreviousDataSection=_changeDetailsFromPreviousDataSection - In the implementation block
@property (nonatomic,readonly) PXDataSection * previousDataSection;                                           //@synthesize previousDataSection=_previousDataSection - In the implementation block
@property (nonatomic,readonly) unsigned long long previousDataSectionIdentifier;                              //@synthesize previousDataSectionIdentifier=_previousDataSectionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL allowsEmptyDataSection; 
@property (getter=isDataSectionEmpty,nonatomic,readonly) BOOL dataSectionEmpty; 
@property (nonatomic,readonly) unsigned long long childChangeDescriptorsInvalidatingDataSection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXDataSection *)dataSection;
-(id)init;
-(PXDataSection *)dataSectionIfCreated;
-(void)_setDataSection:(id)arg1 changeDetails:(id)arg2 ;
-(void)updateDataSectionWithChangeDetails:(id)arg1 ;
-(void)setChildDataSectionManagers:(NSArray *)arg1 ;
-(NSArray *)childDataSectionManagers;
-(void)childDataSectionManager:(id)arg1 didChangeDataSectionWithChangeDetails:(id)arg2 ;
-(PXArrayChangeDetails *)changeDetailsFromPreviousDataSection;
-(unsigned long long)previousDataSectionIdentifier;
-(id)createDataSection;
-(BOOL)allowsEmptyDataSection;
-(id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3 ;
-(unsigned long long)childChangeDescriptorsInvalidatingDataSection;
-(void)_registerAsChangeObserverForDataSectionManagers:(id)arg1 ;
-(void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1 ;
-(PXDataSection *)previousDataSection;
-(void)setOutlineObject:(id<NSObject><NSCopying>)arg1 ;
-(id)initWithChildDataSectionManagers:(id)arg1 ;
-(BOOL)isDataSectionEmpty;
-(id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1 ;
-(id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2 ;
-(id<NSObject><NSCopying>)outlineObject;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

