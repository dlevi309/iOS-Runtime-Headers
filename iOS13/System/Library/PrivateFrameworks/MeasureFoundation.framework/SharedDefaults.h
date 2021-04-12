/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MeasureFoundation.framework/MeasureFoundation
*/


@interface SharedDefaults : NSObject {

	long long _cachedMeasureUnits;

}

@property (assign) long long cachedMeasureUnits;              //@synthesize cachedMeasureUnits=_cachedMeasureUnits - In the implementation block
+(id)defaults;
+(id)measureUnits;
+(id)getDefaultValues;
+(void)setupSpecifier:(id)arg1 ;
+(long long)currentMeasureUnits;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCachedMeasureUnits:(long long)arg1 ;
-(long long)cachedMeasureUnits;
@end

