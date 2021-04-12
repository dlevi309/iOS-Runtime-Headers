/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDRemoteAction.h>

@class NSURL;

@interface DDMapAction : DDRemoteAction {

	NSURL* _commitURL;

}
+(BOOL)actionAvailableForContact:(id)arg1 ;
+(BOOL)handlesUrl:(id)arg1 result:(DDResultRef)arg2 ;
+(id)viewControllerProviderClass;
-(id)previewActions;
-(id)commitURL;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(id)menuActionClasses;
@end

