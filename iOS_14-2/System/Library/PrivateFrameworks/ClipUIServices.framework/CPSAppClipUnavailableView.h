/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIView.h>

@class CPSVibrantLabel, NSString;

@interface CPSAppClipUnavailableView : UIView {

	CPSVibrantLabel* _reasonLabel;

}

@property (assign,nonatomic) NSString * reasonString; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setUpViews;
-(NSString *)reasonString;
-(void)setReasonString:(NSString *)arg1 ;
@end

