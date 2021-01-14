/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)sender;
-(void)setSender:(UIView *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIStoryboardSegueTemplate *)commitTemplate;
-(UIStoryboardPreviewingSegueTemplate *)previewTemplate;
-(void)setPreviewTemplate:(UIStoryboardPreviewingSegueTemplate *)arg1 ;
-(void)setCommitTemplate:(UIStoryboardSegueTemplate *)arg1 ;
@end

