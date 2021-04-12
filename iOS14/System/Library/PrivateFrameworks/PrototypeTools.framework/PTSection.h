/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <libobjc.A.dylib/PTSettingsKeyPathObserver.h>
#import <libobjc.A.dylib/PTRowObserver.h>
#import <libobjc.A.dylib/PTModuleComponent.h>

@protocol PTComponentObserver;
@class PTSettings, NSPredicate, NSString, NSArray, NSMutableArray;

@interface PTSection : NSObject <PTSettingsKeyPathObserver, PTRowObserver, PTModuleComponent> {

	NSArray* _rows;
	NSMutableArray* _enabledRows;
	BOOL _enabledSection;
	PTSettings* _settings;
	id<PTComponentObserver> _componentObserver;
	NSPredicate* _appearancePredicate;
	NSString* _childSettingsKeyPath;
	NSString* _title;
	/*^block*/id _footerTextGetter;
	/*^block*/id _unregisterBlock;

}

@property (nonatomic,retain) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id footerTextGetter;                                             //@synthesize footerTextGetter=_footerTextGetter - In the implementation block
@property (nonatomic,copy) id unregisterBlock;                                              //@synthesize unregisterBlock=_unregisterBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PTComponentObserver> componentObserver;              //@synthesize componentObserver=_componentObserver - In the implementation block
@property (nonatomic,retain) PTSettings * settings;                                         //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSPredicate * appearancePredicate;                             //@synthesize appearancePredicate=_appearancePredicate - In the implementation block
@property (nonatomic,retain) NSString * childSettingsKeyPath;                               //@synthesize childSettingsKeyPath=_childSettingsKeyPath - In the implementation block
@property (nonatomic,readonly) NSArray * allSections; 
@property (nonatomic,readonly) NSArray * enabledSections; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)numberOfRows;
-(NSArray *)allSections;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)unregisterBlock;
-(void)setUnregisterBlock:(id)arg1 ;
-(void)setSettings:(PTSettings *)arg1 ;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(PTSettings *)settings;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)enabledSections;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)rowDidReload:(id)arg1 ;
-(void)_reloadEnabledRows;
-(void)_recomputeEnabledSection;
-(void)_updateEnabledRows;
-(id)initWithRows:(id)arg1 ;
-(NSPredicate *)appearancePredicate;
-(void)setAppearancePredicate:(NSPredicate *)arg1 ;
-(NSString *)childSettingsKeyPath;
-(void)setChildSettingsKeyPath:(NSString *)arg1 ;
-(BOOL)_shouldEnableRow:(id)arg1 ;
-(void)_sendInserts:(id)arg1 deletes:(id)arg2 ;
-(void)_sendReload;
-(id)_remoteEditingWhitelistedComponent;
-(id<PTComponentObserver>)componentObserver;
-(void)setComponentObserver:(id<PTComponentObserver>)arg1 ;
-(unsigned long long)indexOfRow:(id)arg1 ;
-(void)reloadSection;
-(id)footerTextGetter;
-(void)setFooterTextGetter:(id)arg1 ;
@end

