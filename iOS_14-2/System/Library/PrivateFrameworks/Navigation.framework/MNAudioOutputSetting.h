/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface MNAudioOutputSetting : NSObject <NSSecureCoding> {

	NSSet* _pickableRoutes;
	BOOL _selected;
	BOOL _selectedForSystem;
	BOOL _hfpPreference;

}

@property (assign,nonatomic) BOOL selectedForSystem;              //@synthesize selectedForSystem=_selectedForSystem - In the implementation block
@property (nonatomic,readonly) BOOL hfpPreference; 
+(BOOL)supportsSecureCoding;
+(BOOL)isBluetoothRoute:(id)arg1 ;
+(id)macAddressForRoute:(id)arg1 ;
-(id)routeUID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isPicked;
-(id)macAddress;
-(id)description;
-(void)setPicked:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPickableRoutes:(id)arg1 ;
-(id)pickableRouteForHFPPreference:(BOOL)arg1 ;
-(BOOL)settingForBluetoothDevice;
-(BOOL)_isHFPRoute:(id)arg1 ;
-(BOOL)selectedForRouteSelection:(unsigned long long)arg1 ;
-(BOOL)settingForBluetoothComboDevice;
-(BOOL)settingSupportsBluetoothHFP;
-(BOOL)hfpPreference;
-(BOOL)_isPicked:(id)arg1 ;
-(BOOL)_pickRoute:(id)arg1 ;
-(void)setHfpPreference:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 shouldSetHFPPreference:(BOOL)arg2 ;
-(id)initWithPickableRoute:(id)arg1 ;
-(BOOL)containsPickableRoute:(id)arg1 ;
-(BOOL)isEqualToSetting:(id)arg1 ;
-(BOOL)settingForDefaultRoute;
-(BOOL)allowHFPPreferenceSelectionForRouteSelection:(unsigned long long)arg1 ;
-(BOOL)pickedStateConsistentWithHFPPreference;
-(BOOL)selectedForSystem;
-(void)setSelectedForSystem:(BOOL)arg1 ;
@end

