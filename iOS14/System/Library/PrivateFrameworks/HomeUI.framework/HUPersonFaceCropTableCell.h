/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, HMFaceCrop, UIImage, UIImageView, NSArray, NSString;

@interface HUPersonFaceCropTableCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	HMFaceCrop* _personFaceCrop;
	UIImage* _faceImage;
	UIImageView* _faceCropView;
	NSArray* _constraints;

}

@property (nonatomic,retain) HMFaceCrop * personFaceCrop;                                      //@synthesize personFaceCrop=_personFaceCrop - In the implementation block
@property (nonatomic,retain) UIImage * faceImage;                                              //@synthesize faceImage=_faceImage - In the implementation block
@property (nonatomic,retain) UIImageView * faceCropView;                                       //@synthesize faceCropView=_faceCropView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                            //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) HFItem * item;                                                    //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConstraints;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(UIImage *)faceImage;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)layoutSubviews;
-(void)setFaceImage:(UIImage *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)faceCropView;
-(void)setFaceCropView:(UIImageView *)arg1 ;
-(HMFaceCrop *)personFaceCrop;
-(void)setPersonFaceCrop:(HMFaceCrop *)arg1 ;
@end

