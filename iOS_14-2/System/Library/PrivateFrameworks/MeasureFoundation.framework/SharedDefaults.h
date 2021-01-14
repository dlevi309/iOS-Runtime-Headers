/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MeasureFoundation.framework/MeasureFoundation
*/


@interface SharedDefaults : NSObject {

	long long _cachedMeasureUnits;

}

@property (assign) long long cachedMeasureUnits;              //@synthesize cachedMeasureUnits=_cachedMeasureUnits - In the implementation block
+(id)defaults;
+(id)getDefaultValues;
+(id)measureUnits;
+(void)setupSpecifier:(id)arg1 ;
+(long long)currentMeasureUnits;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)dealloc;
-(void)setCachedMeasureUnits:(long long)arg1 ;
-(long long)cachedMeasureUnits;
@end

