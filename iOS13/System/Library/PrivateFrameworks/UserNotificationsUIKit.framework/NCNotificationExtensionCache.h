/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@class NSMutableDictionary;

@interface NCNotificationExtensionCache : NSObject {

	NSMutableDictionary* _extensions;

}

@property (nonatomic,retain) NSMutableDictionary * extensions;              //@synthesize extensions=_extensions - In the implementation block
-(id)init;
-(NSMutableDictionary *)extensions;
-(void)setExtensions:(NSMutableDictionary *)arg1 ;
-(id)extensionForNotificationRequest:(id)arg1 ;
-(void)registerExtensions:(id)arg1 ;
-(id)_extensionMatchingSection:(id)arg1 category:(id)arg2 ;
-(void)_removeAllExtensions;
-(id)_categoriesForExtension:(id)arg1 ;
-(void)_addExtension:(id)arg1 ;
-(id)_customSectionIdentifiersForExtension:(id)arg1 ;
-(id)_sectionDictForSection:(id)arg1 ;
@end

