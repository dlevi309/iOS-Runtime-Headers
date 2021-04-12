/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class PUStackView, NSArray;

@interface PUDuplicatePreviewViewController : UIViewController {

	PUStackView* _stackView;
	NSArray* _assets;
	SCD_Struct_PH4 _stillImageTime;

}

@property (nonatomic,copy) NSArray * assets;                             //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 stillImageTime;              //@synthesize stillImageTime=_stillImageTime - In the implementation block
-(NSArray *)assets;
-(SCD_Struct_PH4)stillImageTime;
-(id)initWithAssets:(id)arg1 stillImageTime:(SCD_Struct_PH4)arg2 ;
-(void)_handleImageResult:(id)arg1 info:(id)arg2 forIndex:(int)arg3 ;
-(void)_handleVideoResult:(id)arg1 info:(id)arg2 forIndex:(int)arg3 ;
-(void)setStillImageTime:(SCD_Struct_PH4)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)setAssets:(NSArray *)arg1 ;
@end

