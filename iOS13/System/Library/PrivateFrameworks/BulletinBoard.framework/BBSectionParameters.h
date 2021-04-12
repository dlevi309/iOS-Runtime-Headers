/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBSectionSubtypeParameters, NSMutableDictionary, NSString, BBSectionIcon, NSUUID;

@interface BBSectionParameters : NSObject <NSSecureCoding> {

	BOOL _showsSubtitle;
	BOOL _usesVariableLayout;
	BOOL _orderSectionUsingRecencyDate;
	BOOL _showsDateInFloatingLockScreenAlert;
	unsigned long long _messageNumberOfLines;
	BBSectionSubtypeParameters* _defaultSubtypeParameters;
	NSMutableDictionary* _allSubtypeParameters;
	NSString* _displayName;
	BBSectionIcon* _icon;
	NSUUID* _UUID;

}

@property (nonatomic,retain) NSUUID * UUID;                                                      //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) BBSectionSubtypeParameters * defaultSubtypeParameters;              //@synthesize defaultSubtypeParameters=_defaultSubtypeParameters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allSubtypeParameters;                         //@synthesize allSubtypeParameters=_allSubtypeParameters - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) BBSectionIcon * icon;                                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL showsSubtitle;                                                 //@synthesize showsSubtitle=_showsSubtitle - In the implementation block
@property (assign,nonatomic) BOOL usesVariableLayout;                                            //@synthesize usesVariableLayout=_usesVariableLayout - In the implementation block
@property (assign,nonatomic) unsigned long long messageNumberOfLines;                            //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
@property (assign,nonatomic) BOOL orderSectionUsingRecencyDate;                                  //@synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate - In the implementation block
@property (assign,nonatomic) BOOL showsDateInFloatingLockScreenAlert;                            //@synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(BBSectionIcon *)icon;
-(void)setIcon:(BBSectionIcon *)arg1 ;
-(void)setMessageNumberOfLines:(unsigned long long)arg1 ;
-(void)setShowsSubtitle:(BOOL)arg1 ;
-(void)setUsesVariableLayout:(BOOL)arg1 ;
-(void)setOrderSectionUsingRecencyDate:(BOOL)arg1 ;
-(void)setShowsDateInFloatingLockScreenAlert:(BOOL)arg1 ;
-(void)setDefaultSubtypeParameters:(BBSectionSubtypeParameters *)arg1 ;
-(void)setAllSubtypeParameters:(NSMutableDictionary *)arg1 ;
-(BBSectionSubtypeParameters *)defaultSubtypeParameters;
-(NSMutableDictionary *)allSubtypeParameters;
-(BOOL)showsSubtitle;
-(unsigned long long)messageNumberOfLines;
-(BOOL)usesVariableLayout;
-(BOOL)orderSectionUsingRecencyDate;
-(BOOL)showsDateInFloatingLockScreenAlert;
-(id)parametersForSubtype:(long long)arg1 ;
-(id)allSubtypes;
@end

