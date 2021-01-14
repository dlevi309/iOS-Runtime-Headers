/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)initWithPass:(id)arg1 passView:(id)arg2 linkedApp:(id)arg3 sharingMethod:(long long)arg4 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)item;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
@end

