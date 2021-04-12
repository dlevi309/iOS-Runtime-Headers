/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UIView, UIStoryboardPreviewingSegueTemplate, UIStoryboardSegueTemplate;

@interface UIStoryboardPreviewingSegueTemplateStorage : NSObject <NSCoding> {

	UIView* _sender;
	UIStoryboardPreviewingSegueTemplate* _previewTemplate;
	UIStoryboardSegueTemplate* _commitTemplate;

}

@property (assign,nonatomic,__weak) UIView * sender;                                                    //@synthesize sender=_sender - In the implementation block
@property (assign,nonatomic,__weak) UIStoryboardPreviewingSegueTemplate * previewTemplate;              //@synthesize previewTemplate=_previewTemplate - In the implementation block
@property (assign,nonatomic,__weak) UIStoryboardSegueTemplate * commitTemplate;                         //@synthesize commitTemplate=_commitTemplate - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)sender;
-(void)setSender:(UIView *)arg1 ;
-(UIStoryboardPreviewingSegueTemplate *)previewTemplate;
-(UIStoryboardSegueTemplate *)commitTemplate;
-(void)setPreviewTemplate:(UIStoryboardPreviewingSegueTemplate *)arg1 ;
-(void)setCommitTemplate:(UIStoryboardSegueTemplate *)arg1 ;
@end

