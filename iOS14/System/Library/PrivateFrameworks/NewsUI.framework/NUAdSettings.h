/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdSettings.h>

@protocol NUAdSettings <NSObject>
@property (readonly,nonatomic) BOOL debugAdSlotsEnabled; 
@property (readonly,nonatomic) id<SXAdvertisingSettings> debugAdvertisementSettings; 
@required
-(BOOL)debugAdSlotsEnabled;
-(id<SXAdvertisingSettings>)debugAdvertisementSettings;

@end


@protocol SXAdvertisingSettings;
@class NSString;

@interface NUAdSettings : NSObject <NUAdSettings> {

	BOOL _debugAdSlotsEnabled;
	id<SXAdvertisingSettings> _debugAdvertisementSettings;

}

@property (nonatomic,readonly) BOOL debugAdSlotsEnabled;                                          //@synthesize debugAdSlotsEnabled=_debugAdSlotsEnabled - In the implementation block
@property (nonatomic,readonly) id<SXAdvertisingSettings> debugAdvertisementSettings;              //@synthesize debugAdvertisementSettings=_debugAdvertisementSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)debugAdSlotsEnabled;
-(id<SXAdvertisingSettings>)debugAdvertisementSettings;
-(id)initWithDebugAdSlotsEnabled:(BOOL)arg1 debugAdvertisementSettings:(id)arg2 ;
@end

