/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <TestFlightCore/TFFeedbackFormBaseCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class TFFeedbackEntryImageCollection, NSMutableArray, NSString;

@interface TFFeedbackFormImageCollectionCell : TFFeedbackFormBaseCell <UITextFieldDelegate> {

	TFFeedbackEntryImageCollection* _imageCollectionEntry;
	NSMutableArray* _imageViews;

}

@property (nonatomic,retain) TFFeedbackEntryImageCollection * imageCollectionEntry;              //@synthesize imageCollectionEntry=_imageCollectionEntry - In the implementation block
@property (nonatomic,readonly) NSMutableArray * imageViews;                                      //@synthesize imageViews=_imageViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(CGSize)arg3 inTraitEnvironment:(id)arg4 ;
+(UIEdgeInsets)_imageViewInsetsInTraitEnvironment:(id)arg1 ;
+(CGSize)_sizeForImage:(id)arg1 constrainedToWidth:(double)arg2 ;
+(CGSize)_sizeForImages:(id)arg1 fittingSize:(CGSize)arg2 inTraitEnvironment:(id)arg3 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSMutableArray *)imageViews;
-(id)_createImageView;
-(unsigned long long)displayableDataType;
-(void)setDisplayedDataImageCollection:(id)arg1 ;
-(void)applyContentsOfEntry:(id)arg1 ;
-(void)setImageCollectionEntry:(TFFeedbackEntryImageCollection *)arg1 ;
-(void)_setupImagesViewsForImages:(id)arg1 ;
-(TFFeedbackEntryImageCollection *)imageCollectionEntry;
@end

