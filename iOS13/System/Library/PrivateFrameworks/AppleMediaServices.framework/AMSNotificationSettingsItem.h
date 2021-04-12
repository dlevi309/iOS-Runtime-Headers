/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(BOOL)isEnabled;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)desc;
-(BOOL)userChanged;
-(id)initWithTitle:(id)arg1 description:(id)arg2 identifier:(id)arg3 enabled:(BOOL)arg4 ;
-(void)setUserChanged:(BOOL)arg1 ;
@end

