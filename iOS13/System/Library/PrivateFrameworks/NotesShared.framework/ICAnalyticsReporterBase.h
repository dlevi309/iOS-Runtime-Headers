/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol ICAnalyticsReporterAccessibilityDelegate;
@interface ICAnalyticsReporterBase : NSObject {

	id<ICAnalyticsReporterAccessibilityDelegate> _accessibilityDelegate;

}

@property (assign,nonatomic,__weak) id<ICAnalyticsReporterAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
+(id)instrumentationKeyForKey:(id)arg1 ;
+(long long)roundIntegerValue:(long long)arg1 ;
+(double)roundDoubleValue:(double)arg1 ;
-(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)setAccessibilityDelegate:(id<ICAnalyticsReporterAccessibilityDelegate>)arg1 ;
-(id<ICAnalyticsReporterAccessibilityDelegate>)accessibilityDelegate;
-(void)addValue:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3 ;
-(void)pushValue:(double)arg1 toDistributionKey:(id)arg2 ;
-(id)instrumentationKeyForKey:(id)arg1 ;
-(void)addAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3 ;
-(void)setAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2 ;
-(id)whitelistedKeysForAccessibility;
-(id)whitelistedSubkeysForAccessibilityForKey:(id)arg1 ;
-(BOOL)shouldLogKeyForAccessibility:(id)arg1 withSignature:(id)arg2 ;
-(id)instrumentationAXKeyForKey:(id)arg1 ;
-(id)keyForCurrentlyActiveAssistiveTechnology;
-(void)pushValue:(double)arg1 toDistributionKey:(id)arg2 withSignature:(id)arg3 ;
@end

