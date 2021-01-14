/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

@class PTSettings, NSPredicate, NSString, NSArray;


@protocol PTModuleComponent <NSObject,NSCopying,NSSecureCoding>
@property (assign,nonatomic,__weak) id<PTComponentObserver> componentObserver; 
@property (nonatomic,retain) PTSettings * settings; 
@property (nonatomic,retain) NSPredicate * appearancePredicate; 
@property (nonatomic,retain) NSString * childSettingsKeyPath; 
@property (nonatomic,readonly) NSArray * allSections; 
@property (nonatomic,readonly) NSArray * enabledSections; 
@required
-(NSArray *)allSections;
-(void)setSettings:(id)arg1;
-(PTSettings *)settings;
-(NSArray *)enabledSections;
-(NSPredicate *)appearancePredicate;
-(void)setAppearancePredicate:(id)arg1;
-(NSString *)childSettingsKeyPath;
-(void)setChildSettingsKeyPath:(id)arg1;
-(id)_remoteEditingWhitelistedComponent;
-(id<PTComponentObserver>)componentObserver;
-(void)setComponentObserver:(id)arg1;

@end

