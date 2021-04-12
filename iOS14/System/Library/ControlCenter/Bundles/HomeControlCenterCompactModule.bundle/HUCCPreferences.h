/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterCompactModule.bundle/HomeControlCenterCompactModule
*/


@interface HUCCPreferences : NSObject

@property (assign,nonatomic) unsigned long long preferredPage; 
+(id)sharedInstance;
+(id)pageNumberByPageString;
+(id)pageStringByPageNumber;
-(unsigned long long)preferredPage;
-(void)setPreferredPage:(unsigned long long)arg1 ;
@end

