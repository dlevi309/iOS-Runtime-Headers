/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@class NSMutableDictionary;

@interface NCNotificationListLegibilityLabelCache : NSObject {

	NSMutableDictionary* _sectionHeaderViewLegibilityLabelDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * sectionHeaderViewLegibilityLabelDictionary;              //@synthesize sectionHeaderViewLegibilityLabelDictionary=_sectionHeaderViewLegibilityLabelDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)legibilityLabelForTitle:(id)arg1 forSuperview:(id)arg2 font:(id)arg3 ;
-(id)_stringDescriptorForFont:(id)arg1 ;
-(void)clearAll;
-(void)setSectionHeaderViewLegibilityLabelDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sectionHeaderViewLegibilityLabelDictionary;
-(id)_createLegibilityLabelWithTitle:(id)arg1 font:(id)arg2 ;
@end

