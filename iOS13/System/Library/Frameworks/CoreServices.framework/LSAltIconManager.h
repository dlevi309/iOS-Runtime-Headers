/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@interface LSAltIconManager : NSObject
+(id)sharedInstance;
-(id)init;
-(void)clearAlternateNameForBundleIdentifier:(id)arg1 validationDictionary:(id)arg2 ;
-(void)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 iconsDictionary:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getAlternateIconNameForIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_getPreferredIconNameForIdentifier:(id)arg1 ;
-(BOOL)isValidAlternateIcon:(id)arg1 forIconsDict:(id)arg2 ;
-(void)_setPreferredIconName:(id)arg1 forIdentifier:(id)arg2 ;
-(BOOL)_setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 withIconsDictionary:(id)arg3 error:(id*)arg4 ;
@end

