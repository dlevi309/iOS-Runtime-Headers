/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UIImageView.h>

@class NSString;

@interface CPSScaledImageView : UIImageView {

	CGSize _scaledImageSize;
	BOOL _needsUpdateScaledImageSize;
	NSString* _textStyleForScaling;

}

@property (nonatomic,retain) NSString * textStyleForScaling;              //@synthesize textStyleForScaling=_textStyleForScaling - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)setTextStyleForScaling:(NSString *)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(NSString *)textStyleForScaling;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

