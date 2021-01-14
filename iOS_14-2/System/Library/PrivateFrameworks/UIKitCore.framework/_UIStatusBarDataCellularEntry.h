/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarDataNetworkEntry.h>

@class NSString;

@interface _UIStatusBarDataCellularEntry : _UIStatusBarDataNetworkEntry {

	BOOL _wifiCallingEnabled;
	BOOL _callForwardingEnabled;
	BOOL _showsSOSWhenDisabled;
	long long _type;
	NSString* _string;
	NSString* _crossfadeString;
	NSString* _badgeString;

}

@property (assign,nonatomic) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (nonatomic,copy) NSString * crossfadeString;                //@synthesize crossfadeString=_crossfadeString - In the implementation block
@property (nonatomic,copy) NSString * badgeString;                    //@synthesize badgeString=_badgeString - In the implementation block
@property (assign,nonatomic) BOOL wifiCallingEnabled;                 //@synthesize wifiCallingEnabled=_wifiCallingEnabled - In the implementation block
@property (assign,nonatomic) BOOL callForwardingEnabled;              //@synthesize callForwardingEnabled=_callForwardingEnabled - In the implementation block
@property (assign,nonatomic) BOOL showsSOSWhenDisabled;               //@synthesize showsSOSWhenDisabled=_showsSOSWhenDisabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCallForwardingEnabled:(BOOL)arg1 ;
-(id)_ui_descriptionBuilder;
-(void)setWifiCallingEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)wifiCallingEnabled;
-(void)setShowsSOSWhenDisabled:(BOOL)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)crossfadeString;
-(BOOL)showsSOSWhenDisabled;
-(NSString *)badgeString;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBadgeString:(NSString *)arg1 ;
-(void)setCrossfadeString:(NSString *)arg1 ;
-(BOOL)callForwardingEnabled;
@end

