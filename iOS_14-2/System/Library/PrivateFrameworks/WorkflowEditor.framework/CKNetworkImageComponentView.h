/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIImageView.h>

@class CKNetworkImageSpecifier;

@interface CKNetworkImageComponentView : UIImageView {

	BOOL _inReusePool;
	id _download;
	CKNetworkImageSpecifier* _specifier;

}

@property (nonatomic,retain) CKNetworkImageSpecifier * specifier;              //@synthesize specifier=_specifier - In the implementation block
-(void)setSpecifier:(CKNetworkImageSpecifier *)arg1 ;
-(CKNetworkImageSpecifier *)specifier;
-(void)layoutSubviews;
-(void)dealloc;
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
-(void)didDownloadImage:(CGImageRef)arg1 error:(id)arg2 ;
-(void)_startDownloadIfNotInReusePool;
-(void)updateContentsRect;
@end

