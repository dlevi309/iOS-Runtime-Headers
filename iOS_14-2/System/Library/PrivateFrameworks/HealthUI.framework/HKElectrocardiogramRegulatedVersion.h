/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSString;

@interface HKElectrocardiogramRegulatedVersion : NSObject {

	NSString* _updateVersion;
	NSString* _featureVersion;

}

@property (nonatomic,copy,readonly) NSString * updateVersion;               //@synthesize updateVersion=_updateVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureVersion;              //@synthesize featureVersion=_featureVersion - In the implementation block
-(NSString *)featureVersion;
-(NSString *)updateVersion;
-(BOOL)_validateSourceVersion:(id)arg1 algorithmVersion:(long long)arg2 ;
-(id)_updateVersionFromSourceVersion:(id)arg1 algorithmVersion:(long long)arg2 ;
-(id)_featureVersionFromUpdateVersion:(id)arg1 ;
-(id)initWithSourceVersion:(id)arg1 algorithmVersion:(long long)arg2 ;
@end

