/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>
#import <libobjc.A.dylib/PTComponentObserver.h>
#import <libobjc.A.dylib/PTModuleComponent.h>

@protocol PTComponentObserver;
@class NSHashTable, NSArray, PTSettings, NSPredicate, NSString;

@interface PTModule : NSObject <PTSettingsKeyPathObserver, PTComponentObserver, PTModuleComponent> {

	NSHashTable* _observers;
	NSArray* _components;
	id<PTComponentObserver> _componentObserver;
	PTSettings* _settings;
	NSArray* _allSections;
	NSArray* _enabledSections;
	NSPredicate* _appearancePredicate;
	NSString* _childSettingsKeyPath;
	NSString* _title;

}

@property (nonatomic,retain) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PTComponentObserver> componentObserver;              //@synthesize componentObserver=_componentObserver - In the implementation block
@property (nonatomic,retain) PTSettings * settings;                                         //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSPredicate * appearancePredicate;                             //@synthesize appearancePredicate=_appearancePredicate - In the implementation block
@property (nonatomic,retain) NSString * childSettingsKeyPath;                               //@synthesize childSettingsKeyPath=_childSettingsKeyPath - In the implementation block
@property (nonatomic,readonly) NSArray * allSections;                                       //@synthesize allSections=_allSections - In the implementation block
@property (nonatomic,readonly) NSArray * enabledSections;                                   //@synthesize enabledSections=_enabledSections - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sectionWithRows:(id)arg1 ;
+(id)moduleWithTitle:(id)arg1 contents:(id)arg2 ;
+(id)sectionWithRows:(id)arg1 title:(id)arg2 ;
+(id)sectionWithRows:(id)arg1 title:(id)arg2 conditionFormat:(id)arg3 ;
+(id)sectionWithRows:(id)arg1 title:(id)arg2 condition:(id)arg3 ;
+(id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 ;
+(id)submoduleWithModule:(id)arg1 childSettingsKeyPath:(id)arg2 condition:(id)arg3 ;
+(id)submoduleWithModule:(id)arg1 ;
+(id)moduleWithSettings:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(PTSettings *)settings;
-(void)setSettings:(PTSettings *)arg1 ;
-(unsigned long long)numberOfSections;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)initWithContents:(id)arg1 ;
-(NSArray *)allSections;
-(id)_remoteEditingWhitelistedModule;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(NSPredicate *)appearancePredicate;
-(void)setAppearancePredicate:(NSPredicate *)arg1 ;
-(NSString *)childSettingsKeyPath;
-(void)setChildSettingsKeyPath:(NSString *)arg1 ;
-(void)enabledSectionsDidChange:(id)arg1 ;
-(void)section:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3 ;
-(void)sectionDidReload:(id)arg1 ;
-(id)_remoteEditingWhitelistedComponent;
-(id<PTComponentObserver>)componentObserver;
-(void)setComponentObserver:(id<PTComponentObserver>)arg1 ;
-(NSArray *)enabledSections;
-(id)_settingsForComponent:(id)arg1 ;
-(void)_updateEnabledSections;
-(id)_computeEnabledSections;
-(void)_reportSectionInsertsAndDeletesRelativeTo:(id)arg1 ;
-(id)rowAtIndexPath:(id)arg1 ;
-(id)indexPathForRow:(id)arg1 ;
@end

