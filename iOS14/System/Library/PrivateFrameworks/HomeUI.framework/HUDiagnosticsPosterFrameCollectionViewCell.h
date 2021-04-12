/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSOperationQueue, UILabel, UIImageView;

@interface HUDiagnosticsPosterFrameCollectionViewCell : UICollectionViewCell {

	NSOperationQueue* _diagnosticOperationQueue;
	UILabel* _textLabel;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UILabel * textLabel;                                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                         //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) NSOperationQueue * diagnosticOperationQueue;              //@synthesize diagnosticOperationQueue=_diagnosticOperationQueue - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setTextLabel:(UILabel *)arg1 ;
-(UILabel *)textLabel;
-(NSOperationQueue *)diagnosticOperationQueue;
-(void)setDiagnosticOperationQueue:(NSOperationQueue *)arg1 ;
-(void)updateHeroFrameWithCameraClip:(id)arg1 clipManager:(id)arg2 ;
-(void)updateWithPosterFrame:(id)arg1 cameraClip:(id)arg2 clipManager:(id)arg3 ;
@end

