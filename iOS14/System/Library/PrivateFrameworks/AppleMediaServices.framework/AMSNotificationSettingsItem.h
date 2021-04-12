/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSDictionary;

@interface AMSNotificationSettingsItem : NSObject {

	BOOL _enabled;
	BOOL _userChanged;
	NSString* _desc;
	NSString* _identifier;
	NSString* _title;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * desc;                                      //@synthesize desc=_desc - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL userChanged;                                       //@synthesize userChanged=_userChanged - In the implementation block
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)desc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)userChanged;
-(id)initWithTitle:(id)arg1 description:(id)arg2 identifier:(id)arg3 enabled:(BOOL)arg4 ;
-(void)setUserChanged:(BOOL)arg1 ;
-(id)description;
-(BOOL)isEnabled;
-(NSString *)identifier;
-(NSString *)title;
@end

