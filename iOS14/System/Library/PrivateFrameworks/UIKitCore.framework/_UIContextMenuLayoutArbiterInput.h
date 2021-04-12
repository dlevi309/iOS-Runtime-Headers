/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITargetedPreview, NSArray;

@interface _UIContextMenuLayoutArbiterInput : NSObject {

	BOOL _shouldUpdateAttachment;
	BOOL _shouldAvoidInputViews;
	UITargetedPreview* _sourcePreview;
	NSArray* _accessoryViews;
	CGSize _preferredPreviewSize;
	CGSize _preferredMenuSize;
	UIEdgeInsets _preferredEdgeInsets;
	SCD_Struct_UI3 _preferredAnchor;

}

@property (assign,nonatomic) BOOL shouldUpdateAttachment;                    //@synthesize shouldUpdateAttachment=_shouldUpdateAttachment - In the implementation block
@property (assign,nonatomic) BOOL shouldAvoidInputViews;                     //@synthesize shouldAvoidInputViews=_shouldAvoidInputViews - In the implementation block
@property (assign,nonatomic) CGSize preferredPreviewSize;                    //@synthesize preferredPreviewSize=_preferredPreviewSize - In the implementation block
@property (assign,nonatomic) CGSize preferredMenuSize;                       //@synthesize preferredMenuSize=_preferredMenuSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets preferredEdgeInsets;               //@synthesize preferredEdgeInsets=_preferredEdgeInsets - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI3 preferredAnchor;                 //@synthesize preferredAnchor=_preferredAnchor - In the implementation block
@property (nonatomic,retain) UITargetedPreview * sourcePreview;              //@synthesize sourcePreview=_sourcePreview - In the implementation block
@property (nonatomic,retain) NSArray * accessoryViews;                       //@synthesize accessoryViews=_accessoryViews - In the implementation block
-(CGSize)preferredPreviewSize;
-(void)setPreferredPreviewSize:(CGSize)arg1 ;
-(CGSize)preferredMenuSize;
-(void)setPreferredMenuSize:(CGSize)arg1 ;
-(void)setPreferredAnchor:(SCD_Struct_UI3)arg1 ;
-(void)setAccessoryViews:(NSArray *)arg1 ;
-(UITargetedPreview *)sourcePreview;
-(NSArray *)accessoryViews;
-(UIEdgeInsets)preferredEdgeInsets;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(void)setPreferredEdgeInsets:(UIEdgeInsets)arg1 ;
-(SCD_Struct_UI3)preferredAnchor;
-(BOOL)shouldUpdateAttachment;
-(void)setShouldUpdateAttachment:(BOOL)arg1 ;
-(BOOL)shouldAvoidInputViews;
-(void)setShouldAvoidInputViews:(BOOL)arg1 ;
@end

