/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFShowWidgetConfigurationEvent : WFEvent {

	NSString* _appBundleIdentifier;
	NSString* _intentType;
	NSString* _sizeClass;

}

@property (nonatomic,copy) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * intentType;                       //@synthesize intentType=_intentType - In the implementation block
@property (nonatomic,copy) NSString * sizeClass;                        //@synthesize sizeClass=_sizeClass - In the implementation block
+(Class)codableEventClass;
-(void)setSizeClass:(NSString *)arg1 ;
-(void)setIntentType:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(NSString *)sizeClass;
-(NSString *)intentType;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(id)initWithAppBundleIdentifier:(id)arg1 intentType:(id)arg2 sizeClass:(id)arg3 ;
@end

