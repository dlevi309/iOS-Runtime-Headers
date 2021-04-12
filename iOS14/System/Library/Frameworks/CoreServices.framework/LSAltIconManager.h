/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@interface LSAltIconManager : NSObject
+(id)sharedInstance;
-(id)init;
-(void)_setPreferredIconName:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 iconsDictionary:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)_getPreferredIconNameForIdentifier:(id)arg1 ;
-(BOOL)_setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 withIconsDictionary:(id)arg3 error:(id*)arg4 ;
-(id)alternateIconNameForIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)clearAlternateNameForBundleIdentifier:(id)arg1 validationDictionary:(id)arg2 ;
-(BOOL)isValidAlternateIcon:(id)arg1 forIconsDict:(id)arg2 ;
@end

