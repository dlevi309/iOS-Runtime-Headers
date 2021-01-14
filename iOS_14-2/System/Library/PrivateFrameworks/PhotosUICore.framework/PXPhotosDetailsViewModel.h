/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutablePhotosDetailsViewModel.h>

@class PXSectionedSelectionManager, NSSet, NSString;

@interface PXPhotosDetailsViewModel : PXObservable <PXMutablePhotosDetailsViewModel> {

	BOOL _selecting;
	BOOL _supportsSelection;
	BOOL _supportsFaceMode;
	BOOL _faceModeEnabled;
	PXSectionedSelectionManager* _selectionManager;
	NSSet* _disabledActionTypes;

}

@property (getter=isSelecting,nonatomic,readonly) BOOL selecting;                           //@synthesize selecting=_selecting - In the implementation block
@property (nonatomic,readonly) BOOL supportsSelection;                                      //@synthesize supportsSelection=_supportsSelection - In the implementation block
@property (nonatomic,readonly) PXSectionedSelectionManager * selectionManager;              //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,readonly) BOOL supportsFaceMode;                                       //@synthesize supportsFaceMode=_supportsFaceMode - In the implementation block
@property (getter=isFaceModeEnabled,nonatomic,readonly) BOOL faceModeEnabled;               //@synthesize faceModeEnabled=_faceModeEnabled - In the implementation block
@property (nonatomic,readonly) NSSet * disabledActionTypes;                                 //@synthesize disabledActionTypes=_disabledActionTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSectionedSelectionManager *)selectionManager;
-(BOOL)isSelecting;
-(NSSet *)disabledActionTypes;
-(void)setDisabledActionTypes:(NSSet *)arg1 ;
-(void)setSupportsSelection:(BOOL)arg1 ;
-(void)setSupportsFaceMode:(BOOL)arg1 ;
-(void)setSelectionManager:(PXSectionedSelectionManager *)arg1 ;
-(id)mutableChangeObject;
-(BOOL)supportsSelection;
-(void)performChanges:(/*^block*/id)arg1 ;
-(BOOL)supportsFaceMode;
-(BOOL)isFaceModeEnabled;
-(void)setFaceModeEnabled:(BOOL)arg1 ;
-(void)setSelecting:(BOOL)arg1 ;
@end

