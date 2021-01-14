/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AssetExplorer-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class UIView, NSString;

@interface AEGenericViewTile : NSObject <PXUIViewBasicTile, PXReusableObject> {

	UIView* _view;

}

@property (nonatomic,retain) UIView * view;                         //@synthesize view=_view - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)becomeReusable;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)setView:(UIView *)arg1 ;
-(UIView *)view;
-(id)initWithView:(id)arg1 ;
@end

