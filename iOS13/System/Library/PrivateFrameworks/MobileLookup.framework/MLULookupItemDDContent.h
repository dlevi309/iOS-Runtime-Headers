/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
*/

#import <MobileLookup/MobileLookup-Structs.h>
#import <MobileLookup/MLULookupItemContent.h>

@class DDPreviewAction;

@interface MLULookupItemDDContent : MLULookupItemContent {

	DDPreviewAction* _previewAction;

}
-(id)contact;
-(void)dismissViewController;
-(unsigned long long)commitType;
-(id)commitURL;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 documentProperties:(id)arg3 ;
-(void)setupViewControllerInCommitMode;
@end

