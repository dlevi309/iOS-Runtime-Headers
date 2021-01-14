/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
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

