/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKFullColorImageView.h>

@class CLKDevice, UIImageView, UILabel, NSString;

@interface AltitudeModularSmallView : UIView <CLKFullColorImageView> {

	CLKDevice* _device;
	UIImageView* _upperImage;
	UIImageView* _lowerImage;
	UILabel* _label;

}

@property (nonatomic,retain) CLKDevice * device;                                                 //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) UIImageView * upperImage;                                           //@synthesize upperImage=_upperImage - In the implementation block
@property (nonatomic,retain) UIImageView * lowerImage;                                           //@synthesize lowerImage=_lowerImage - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                    //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLKDevice *)device;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initFullColorImageViewWithDevice:(id)arg1 ;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)configureWithImageProvider:(id)arg1 reason:(long long)arg2 ;
-(UIImageView *)upperImage;
-(void)setUpperImage:(UIImageView *)arg1 ;
-(UIImageView *)lowerImage;
-(void)setLowerImage:(UIImageView *)arg1 ;
@end

