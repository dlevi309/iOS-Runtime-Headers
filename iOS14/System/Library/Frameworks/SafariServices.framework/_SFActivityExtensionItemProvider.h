/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivityItemProvider.h>

@class NSExtensionItem;

@interface _SFActivityExtensionItemProvider : _SFActivityItemProvider {

	NSExtensionItem* _extensionItem;

}

@property (nonatomic,retain) NSExtensionItem * extensionItem;              //@synthesize extensionItem=_extensionItem - In the implementation block
-(id)item;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)initWithExtensionItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 webView:(id)arg4 ;
-(NSExtensionItem *)extensionItem;
-(void)setExtensionItem:(NSExtensionItem *)arg1 ;
-(id)_itemForActivityType:(id)arg1 ;
@end

