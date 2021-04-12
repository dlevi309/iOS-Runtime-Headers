/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
*/

#import <MobileLookup/MobileLookup-Structs.h>
#import <MobileLookup/MLULookupItemContent.h>

@class DDPreviewAction;

@interface MLULookupItemDDContent : MLULookupItemContent {

	DDPreviewAction* _previewAction;

}
-(id)contact;
-(unsigned long long)commitType;
-(void)dismissViewController;
-(id)commitURL;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 documentProperties:(id)arg3 ;
-(void)setupViewControllerInCommitMode;
@end

