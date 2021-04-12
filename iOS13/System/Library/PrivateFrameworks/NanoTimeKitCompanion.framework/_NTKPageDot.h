/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateImage;
-(BOOL)representsCurrentPage;
-(void)setRepresentsCurrentPage:(BOOL)arg1 ;
-(id)initWithDiameter:(double)arg1 currentPageColor:(id)arg2 otherPageColor:(id)arg3 forDevice:(id)arg4 ;
@end

