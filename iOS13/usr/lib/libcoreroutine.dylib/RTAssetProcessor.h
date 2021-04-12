/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTDefaultsManager;

@interface RTAssetProcessor : NSObject {

	RTDefaultsManager* _defaultsManager;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;              //@synthesize defaultsManager=_defaultsManager - In the implementation block
-(id)init;
-(RTDefaultsManager *)defaultsManager;
-(id)initWithDefaultsManager:(id)arg1 ;
-(id)_objectForKey:(id)arg1 expectedClass:(Class)arg2 inDictionary:(id)arg3 ;
-(BOOL)_deviceSeed:(id)arg1 belongsToGroupId:(id)arg2 seedId:(id)arg3 modValue:(id)arg4 low:(id)arg5 high:(id)arg6 ;
-(BOOL)processAssetsAtPath:(id)arg1 intoPath:(id)arg2 outError:(id*)arg3 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
@end

