/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailSectionController.h>
#import <libobjc.A.dylib/NTKCFaceDetailExpandableDescriptionCellDelegate.h>

@protocol NTKCFaceDetailDescriptionSectionDelegate;
@class NTKCFaceDetailExpandableDescriptionCell, NSString;

@interface NTKCFaceDetailDescriptionSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailExpandableDescriptionCellDelegate> {

	BOOL _external;
	id<NTKCFaceDetailDescriptionSectionDelegate> _delegate;

}

@property (assign,nonatomic) BOOL external;                                                             //@synthesize external=_external - In the implementation block
@property (nonatomic,retain) NTKCFaceDetailExpandableDescriptionCell * cell; 
@property (assign,nonatomic) BOOL expanded; 
@property (assign,nonatomic,__weak) id<NTKCFaceDetailDescriptionSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasDescriptionSectionForFace:(id)arg1 inGallery:(BOOL)arg2 orExternal:(BOOL)arg3 ;
+(id)_descriptionForFace:(id)arg1 inGallery:(BOOL)arg2 orExternal:(BOOL)arg3 ;
-(id<NTKCFaceDetailDescriptionSectionDelegate>)delegate;
-(void)setDelegate:(id<NTKCFaceDetailDescriptionSectionDelegate>)arg1 ;
-(BOOL)external;
-(void)_commonInit;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)setExternal:(BOOL)arg1 ;
-(id)titleForHeader;
-(void)descriptionCellDidExpand:(id)arg1 ;
-(void)faceDidChange;
-(id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 external:(BOOL)arg4 ;
-(id)_faceDescription;
@end

