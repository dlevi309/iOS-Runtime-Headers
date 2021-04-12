/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <ShareSheet/UIActivityItemProvider.h>

@class PKPass, PKPassView, PKLinkedApplication;

@interface PKActivityItemProvider : UIActivityItemProvider {

	PKPass* _pass;
	PKPassView* _passView;
	PKLinkedApplication* _linkedApp;
	long long _sharingMethod;

}
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(id)initWithPass:(id)arg1 passView:(id)arg2 linkedApp:(id)arg3 sharingMethod:(long long)arg4 ;
@end

