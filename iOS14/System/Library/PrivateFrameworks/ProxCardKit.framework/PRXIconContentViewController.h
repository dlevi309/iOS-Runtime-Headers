/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
*/

#import <ProxCardKit/PRXCardContentViewController.h>

@class NSArray, NSString, PRXIconContentView;

@interface PRXIconContentViewController : PRXCardContentViewController {

	long long _imageStyle;
	NSArray* _images;
	NSString* _bodyText;

}

@property (nonatomic,readonly) PRXIconContentView * contentView; 
@property (assign,nonatomic) long long imageStyle;                            //@synthesize imageStyle=_imageStyle - In the implementation block
@property (nonatomic,copy) NSArray * images;                                  //@synthesize images=_images - In the implementation block
@property (nonatomic,copy) NSString * bodyText;                               //@synthesize bodyText=_bodyText - In the implementation block
+(Class)contentViewClass;
-(NSString *)bodyText;
-(void)setImages:(NSArray *)arg1 ;
-(id)initWithContentView:(id)arg1 ;
-(long long)imageStyle;
-(void)setBodyText:(NSString *)arg1 ;
-(void)viewDidLoad;
-(NSArray *)images;
-(void)setImageStyle:(long long)arg1 ;
-(void)_updateImageViews;
-(void)_updateBodyLabel;
@end

