/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString, NSDictionary, PKDiscoveryMedia, PKColor;

@interface PKDiscoveryCallToAction : NSObject <NSSecureCoding> {

	NSSet* _allowedFeatureIdentifiers;
	NSString* _transitNetworkIdentifier;
	NSString* _referrerIdentifier;
	BOOL _foregroundContentModeIsSet;
	BOOL _roundIcon;
	NSString* _titleKey;
	NSString* _subtitleKey;
	NSString* _buttonTextKey;
	long long _action;
	NSDictionary* _actionInfo;
	PKDiscoveryMedia* _icon;
	PKColor* _backgroundColor;
	long long _foregroundContentMode;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	NSString* _localizedButtonText;

}

@property (nonatomic,retain) NSString * localizedTitle;                          //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) NSString * localizedSubtitle;                       //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,retain) NSString * localizedButtonText;                     //@synthesize localizedButtonText=_localizedButtonText - In the implementation block
@property (nonatomic,readonly) NSString * titleKey;                              //@synthesize titleKey=_titleKey - In the implementation block
@property (nonatomic,readonly) NSString * subtitleKey;                           //@synthesize subtitleKey=_subtitleKey - In the implementation block
@property (nonatomic,readonly) NSString * buttonTextKey;                         //@synthesize buttonTextKey=_buttonTextKey - In the implementation block
@property (nonatomic,readonly) long long action;                                 //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionInfo;                        //@synthesize actionInfo=_actionInfo - In the implementation block
@property (nonatomic,readonly) NSString * referrerIdentifier; 
@property (nonatomic,readonly) PKDiscoveryMedia * icon;                          //@synthesize icon=_icon - In the implementation block
@property (assign,getter=shouldRoundIcon,nonatomic) BOOL roundIcon;              //@synthesize roundIcon=_roundIcon - In the implementation block
@property (nonatomic,readonly) PKColor * backgroundColor;                        //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) long long foregroundContentMode;                    //@synthesize foregroundContentMode=_foregroundContentMode - In the implementation block
@property (nonatomic,readonly) long long paymentSetupMode; 
@property (nonatomic,readonly) NSSet * allowedFeatureIdentifiers; 
@property (nonatomic,readonly) NSString * transitNetworkIdentifier; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)action;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(PKColor *)backgroundColor;
-(PKDiscoveryMedia *)icon;
-(NSString *)localizedSubtitle;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(NSString *)subtitleKey;
-(NSString *)titleKey;
-(NSString *)referrerIdentifier;
-(NSDictionary *)actionInfo;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(void)setForegroundContentMode:(long long)arg1 ;
-(long long)paymentSetupMode;
-(NSSet *)allowedFeatureIdentifiers;
-(NSString *)transitNetworkIdentifier;
-(NSString *)buttonTextKey;
-(BOOL)shouldRoundIcon;
-(void)setRoundIcon:(BOOL)arg1 ;
-(long long)foregroundContentMode;
-(NSString *)localizedButtonText;
-(void)setLocalizedButtonText:(NSString *)arg1 ;
@end

