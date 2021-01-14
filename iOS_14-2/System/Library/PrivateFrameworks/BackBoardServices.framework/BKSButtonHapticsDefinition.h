/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BSMutableSettings, BSSettings;

@interface BKSButtonHapticsDefinition : NSObject <NSSecureCoding> {

	BSMutableSettings* _settings;
	BOOL _representsHomeButton;

}

@property (assign,nonatomic) BOOL representsHomeButton;                                           //@synthesize representsHomeButton=_representsHomeButton - In the implementation block
@property (getter=_BSSettings,nonatomic,readonly) BSSettings * BSSettings;                        //@synthesize settings=_settings - In the implementation block
@property (getter=isLongPressEnabled,nonatomic,readonly) long long longPressEnabled; 
@property (assign,nonatomic) double minimumMultiplePressTimeInterval; 
@property (assign,nonatomic) double maximumMultiplePressTimeInterval; 
@property (assign,nonatomic) double minimumLongPressTimeInterval; 
@property (assign,nonatomic) double maximumLongPressTimeInterval; 
@property (assign,nonatomic) long long maximumPressCount; 
@property (assign,nonatomic) long long maximumTapCount; 
@property (assign,nonatomic) long long clickHapticAssetType; 
+(BOOL)supportsSecureCoding;
+(id)definitionForHomeButton;
-(double)maximumMultiplePressTimeInterval;
-(id)init;
-(void)setMinimumLongPressTimeInterval:(double)arg1 ;
-(double)maximumLongPressTimeInterval;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setClickHapticAssetType:(long long)arg1 ;
-(id)_BSSettings;
-(void)setMaximumMultiplePressTimeInterval:(double)arg1 ;
-(long long)maximumPressCount;
-(id)description;
-(id)_initWithBSSettings:(id)arg1 ;
-(double)minimumMultiplePressTimeInterval;
-(id)initWithCoder:(id)arg1 ;
-(long long)maximumTapCount;
-(BOOL)representsHomeButton;
-(long long)clickHapticAssetType;
-(void)setMaximumLongPressTimeInterval:(double)arg1 ;
-(void)setMinimumMultiplePressTimeInterval:(double)arg1 ;
-(void)setMaximumPressCount:(long long)arg1 ;
-(double)minimumLongPressTimeInterval;
-(void)setMaximumTapCount:(long long)arg1 ;
-(long long)isLongPressEnabled;
-(void)updateFromDefinition:(id)arg1 withChangeInspectorBlock:(/*^block*/id)arg2 ;
-(void)setRepresentsHomeButton:(BOOL)arg1 ;
@end

