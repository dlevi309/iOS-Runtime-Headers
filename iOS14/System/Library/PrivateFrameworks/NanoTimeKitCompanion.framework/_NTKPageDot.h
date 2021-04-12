/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/NTKPageDot.h>

@class UIImage;

@interface _NTKPageDot : UIImageView <NTKPageDot> {

	double _diameter;
	UIImage* _currentPageImage;
	UIImage* _otherPageImage;
	BOOL _representsCurrentPage;

}

@property (assign,nonatomic) BOOL representsCurrentPage;              //@synthesize representsCurrentPage=_representsCurrentPage - In the implementation block
-(void)_updateImage;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)representsCurrentPage;
-(void)setRepresentsCurrentPage:(BOOL)arg1 ;
-(id)initWithDiameter:(double)arg1 currentPageColor:(id)arg2 otherPageColor:(id)arg3 forDevice:(id)arg4 ;
@end

