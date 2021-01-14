/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>

@class PXUILabel, PXLabelSpec, NSString, UIView;

@interface PXUILabelTile : NSObject <PXUIViewBasicTile> {

	PXUILabel* _label;
	PXLabelSpec* _spec;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)becomeReusable;
-(void)setText:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)_setSpec:(id)arg1 ;
-(UIView *)view;
-(NSString *)text;
@end

