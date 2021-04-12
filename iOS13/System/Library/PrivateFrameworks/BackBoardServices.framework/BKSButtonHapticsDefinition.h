/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithBSSettings:(id)arg1 ;
-(long long)maximumTapCount;
-(void)setMaximumTapCount:(long long)arg1 ;
-(long long)maximumPressCount;
-(void)setMaximumPressCount:(long long)arg1 ;
-(double)minimumMultiplePressTimeInterval;
-(void)setMinimumMultiplePressTimeInterval:(double)arg1 ;
-(double)maximumMultiplePressTimeInterval;
-(void)setMaximumMultiplePressTimeInterval:(double)arg1 ;
-(double)minimumLongPressTimeInterval;
-(void)setMinimumLongPressTimeInterval:(double)arg1 ;
-(double)maximumLongPressTimeInterval;
-(void)setMaximumLongPressTimeInterval:(double)arg1 ;
-(long long)isLongPressEnabled;
-(long long)clickHapticAssetType;
-(void)setClickHapticAssetType:(long long)arg1 ;
-(void)updateFromDefinition:(id)arg1 withChangeInspectorBlock:(/*^block*/id)arg2 ;
-(id)_BSSettings;
-(BOOL)representsHomeButton;
-(void)setRepresentsHomeButton:(BOOL)arg1 ;
@end

