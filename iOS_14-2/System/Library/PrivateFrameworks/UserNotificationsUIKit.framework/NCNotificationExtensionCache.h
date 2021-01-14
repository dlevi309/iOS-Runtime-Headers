/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@class NSMutableDictionary;

@interface NCNotificationExtensionCache : NSObject {

	NSMutableDictionary* _extensions;

}

@property (nonatomic,retain) NSMutableDictionary * extensions;              //@synthesize extensions=_extensions - In the implementation block
-(id)_sectionDictForSection:(id)arg1 ;
-(id)init;
-(void)_removeAllExtensions;
-(NSMutableDictionary *)extensions;
-(void)_addExtension:(id)arg1 ;
-(void)setExtensions:(NSMutableDictionary *)arg1 ;
-(id)_categoriesForExtension:(id)arg1 ;
-(id)extensionForNotificationRequest:(id)arg1 ;
-(id)_extensionMatchingSection:(id)arg1 category:(id)arg2 ;
-(void)registerExtensions:(id)arg1 ;
@end

