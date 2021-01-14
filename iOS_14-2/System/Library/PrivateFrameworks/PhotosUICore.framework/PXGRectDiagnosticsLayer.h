/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <QuartzCore/CALayer.h>

@class PXGLayout, NSArray;

@interface PXGRectDiagnosticsLayer : CALayer {

	PXGLayout* _layout;
	NSArray* _rectDiagnosticsProviders;

}

@property (nonatomic,retain) PXGLayout * layout;                            //@synthesize layout=_layout - In the implementation block
@property (nonatomic,copy) NSArray * rectDiagnosticsProviders;              //@synthesize rectDiagnosticsProviders=_rectDiagnosticsProviders - In the implementation block
+(id)defaultRectDiagnosticsProviders;
-(void)update;
-(void)setLayout:(PXGLayout *)arg1 ;
-(NSArray *)rectDiagnosticsProviders;
-(void)setRectDiagnosticsProviders:(NSArray *)arg1 ;
-(PXGLayout *)layout;
@end

