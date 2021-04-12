/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/


@interface HUCCPreferences : NSObject

@property (assign,nonatomic) unsigned long long preferredPage; 
+(id)sharedInstance;
+(id)pageNumberByPageString;
+(id)pageStringByPageNumber;
-(unsigned long long)preferredPage;
-(void)setPreferredPage:(unsigned long long)arg1 ;
@end

