/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIImageTile.h>

@class PXTitleSubtitleUILabel, PXImageTitleSubtitleSpec, NSString;

@interface PXUIImageTitleSubtitleTile : PXUIImageTile {

	PXTitleSubtitleUILabel* _label;
	PXImageTitleSubtitleSpec* _spec;
	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
-(void)becomeReusable;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(id)view;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
@end

