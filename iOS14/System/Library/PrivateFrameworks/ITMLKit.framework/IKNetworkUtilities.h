/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class RadiosPreferences, NSString;

@interface IKNetworkUtilities : NSObject <RadiosPreferencesDelegate> {

	id _isNetworkTypeChangedToken;
	id _networkReachabilityChangedToken;
	RadiosPreferences* _radioPrefs;

}

@property (getter=isAirplaneModeEnabled,nonatomic,readonly) BOOL airplaneModeEnabled; 
@property (getter=isNetworkReachable,nonatomic,readonly) BOOL networkReachable; 
@property (nonatomic,readonly) NSString * networkType; 
@property (nonatomic,readonly) double lastNetworkChangedTime; 
+(id)sharedInstance;
-(NSString *)networkType;
-(BOOL)isNetworkReachable;
-(BOOL)isAirplaneModeEnabled;
-(void)_notifyObservers;
-(id)init;
-(void)airplaneModeChanged;
-(void)dealloc;
-(double)lastNetworkChangedTime;
@end

