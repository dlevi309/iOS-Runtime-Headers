/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXSectionedSelectionManager, NSSet;


@protocol PXMutablePhotosDetailsViewModel <NSObject>
@property (assign,getter=isSelecting,nonatomic) BOOL selecting; 
@property (assign,nonatomic) BOOL supportsSelection; 
@property (nonatomic,retain) PXSectionedSelectionManager * selectionManager; 
@property (assign,nonatomic) BOOL supportsFaceMode; 
@property (assign,getter=isFaceModeEnabled,nonatomic) BOOL faceModeEnabled; 
@property (nonatomic,retain) NSSet * disabledActionTypes; 
@required
-(PXSectionedSelectionManager *)selectionManager;
-(BOOL)isSelecting;
-(NSSet *)disabledActionTypes;
-(void)setDisabledActionTypes:(id)arg1;
-(void)setSupportsSelection:(BOOL)arg1;
-(void)setSupportsFaceMode:(BOOL)arg1;
-(void)setSelectionManager:(id)arg1;
-(BOOL)supportsSelection;
-(BOOL)supportsFaceMode;
-(BOOL)isFaceModeEnabled;
-(void)setFaceModeEnabled:(BOOL)arg1;
-(void)setSelecting:(BOOL)arg1;

@end

