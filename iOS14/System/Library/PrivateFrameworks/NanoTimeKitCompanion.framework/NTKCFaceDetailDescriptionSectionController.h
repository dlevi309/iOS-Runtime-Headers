/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExpanded:(BOOL)arg1 ;
-(id<NTKCFaceDetailDescriptionSectionDelegate>)delegate;
-(BOOL)expanded;
-(BOOL)external;
-(id)titleForHeader;
-(void)setDelegate:(id<NTKCFaceDetailDescriptionSectionDelegate>)arg1 ;
-(void)setExternal:(BOOL)arg1 ;
-(void)_commonInit;
-(void)descriptionCellDidExpand:(id)arg1 ;
-(id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(BOOL)arg3 external:(BOOL)arg4 ;
-(void)faceDidChange;
-(id)_faceDescription;
@end

