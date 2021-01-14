/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCompactThumbnailViewController.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class WFFileType, NSString;

@interface WFCompactFileThumbnailViewController : WFCompactThumbnailViewController <UIPointerInteractionDelegate> {

	WFFileType* _fileType;
	NSString* _filename;

}

@property (nonatomic,readonly) WFFileType * fileType;               //@synthesize fileType=_fileType - In the implementation block
@property (nonatomic,readonly) NSString * filename;                 //@synthesize filename=_filename - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)filename;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(double)contentHeightForWidth:(double)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(WFFileType *)fileType;
-(id)initWithFileType:(id)arg1 filename:(id)arg2 ;
@end

