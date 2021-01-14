/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WidgetKit.framework/WidgetKit
*/

@class NSString;


@protocol CHSWidgetPersonality <NSObject>
@property (nonatomic,copy,readonly) NSString * extensionBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * kind; 
@required
-(BOOL)matchesPersonality:(id)arg1;
-(NSString *)kind;
-(NSString *)extensionBundleIdentifier;

@end

