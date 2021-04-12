/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@class NSMutableDictionary;

@interface NCNotificationListLegibilityLabelCache : NSObject {

	NSMutableDictionary* _sectionHeaderViewLegibilityLabelDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * sectionHeaderViewLegibilityLabelDictionary;              //@synthesize sectionHeaderViewLegibilityLabelDictionary=_sectionHeaderViewLegibilityLabelDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)clearAll;
-(NSMutableDictionary *)sectionHeaderViewLegibilityLabelDictionary;
-(id)_stringDescriptorForFont:(id)arg1 ;
-(id)_createLegibilityLabelWithTitle:(id)arg1 font:(id)arg2 ;
-(id)legibilityLabelForTitle:(id)arg1 forSuperview:(id)arg2 font:(id)arg3 ;
-(void)setSectionHeaderViewLegibilityLabelDictionary:(NSMutableDictionary *)arg1 ;
@end

