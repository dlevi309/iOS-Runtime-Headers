/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUAdSettings.h>

@protocol NUAdSettings <NSObject>
@property (nonatomic,readonly) BOOL debugAdSlotsEnabled; 
@property (nonatomic,readonly) BOOL debugInteractivityEnabled; 
@property (nonatomic,readonly) id<SXAdvertisingSettings> debugAdvertisementSettings; 
@required
-(BOOL)debugAdSlotsEnabled;
-(BOOL)debugInteractivityEnabled;
-(id<SXAdvertisingSettings>)debugAdvertisementSettings;

@end


@protocol SXAdvertisingSettings;
@class NSString;

@interface NUAdSettings : NSObject <NUAdSettings> {

	BOOL _debugAdSlotsEnabled;
	BOOL _debugInteractivityEnabled;
	id<SXAdvertisingSettings> _debugAdvertisementSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL debugAdSlotsEnabled;                                          //@synthesize debugAdSlotsEnabled=_debugAdSlotsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL debugInteractivityEnabled;                                    //@synthesize debugInteractivityEnabled=_debugInteractivityEnabled - In the implementation block
@property (nonatomic,readonly) id<SXAdvertisingSettings> debugAdvertisementSettings;              //@synthesize debugAdvertisementSettings=_debugAdvertisementSettings - In the implementation block
-(BOOL)debugAdSlotsEnabled;
-(BOOL)debugInteractivityEnabled;
-(id<SXAdvertisingSettings>)debugAdvertisementSettings;
-(id)initWithDebugAdSlotsEnabled:(BOOL)arg1 debugInteractivityEnabled:(BOOL)arg2 debugAdvertisementSettings:(id)arg3 ;
@end

