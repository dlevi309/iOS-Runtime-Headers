/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <LocationSupport/CLSettingsDictionary.h>
#import <libobjc.A.dylib/CLSettingsManagerClientProtocol.h>

@protocol CLSettingsManagerProtocol;
@class CLIntersiloUniverse, NSString;

@interface CLSettingsMirror : CLSettingsDictionary <CLSettingsManagerClientProtocol> {

	BOOL _valid;
	/*^block*/id _settingsChangeHandler;
	id<CLSettingsManagerProtocol> _manager;
	CLIntersiloUniverse* _universe;

}

@property (nonatomic,retain) id<CLSettingsManagerProtocol> manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) CLIntersiloUniverse * universe;                     //@synthesize universe=_universe - In the implementation block
@property (nonatomic,copy) id settingsChangeHandler;                             //@synthesize settingsChangeHandler=_settingsChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid;                                         //@synthesize valid=_valid - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setLong:(long long)arg1 forKey:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id<CLSettingsManagerProtocol>)manager;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)setManager:(id<CLSettingsManagerProtocol>)arg1 ;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)setUniverse:(CLIntersiloUniverse *)arg1 ;
-(void)setSettingsChangeHandler:(id)arg1 ;
-(void)didUpdateSettings:(id)arg1 ;
-(id)initInUniverse:(id)arg1 ;
-(void)setShort:(short)arg1 forKey:(id)arg2 ;
-(void)setInt:(int)arg1 forKey:(id)arg2 ;
-(id)settingsChangeHandler;
-(CLIntersiloUniverse *)universe;
@end

