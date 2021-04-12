/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(PTSettings *)settings;
-(void)setSettings:(id)arg1;
-(NSArray *)allSections;
-(NSPredicate *)appearancePredicate;
-(void)setAppearancePredicate:(id)arg1;
-(NSString *)childSettingsKeyPath;
-(void)setChildSettingsKeyPath:(id)arg1;
-(id)_remoteEditingWhitelistedComponent;
-(id<PTComponentObserver>)componentObserver;
-(void)setComponentObserver:(id)arg1;
-(NSArray *)enabledSections;

@end

