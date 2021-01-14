/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSMutableDictionary, NSString;

@interface ICMusicAccountNotificationsSettingsSwitch : NSObject {

	NSDictionary* _itemResponseDictionary;
	NSMutableDictionary* _valueDictionary;
	BOOL _isToggled;
	BOOL _hasBeenPreviouslyToggled;

}

@property (assign,nonatomic) BOOL isToggled; 
@property (nonatomic,readonly) BOOL hasBeenPreviouslyToggled; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDictionary * itemResponseDictionary;              //@synthesize itemResponseDictionary=_itemResponseDictionary - In the implementation block
-(NSDictionary *)itemResponseDictionary;
-(id)initWithToggleState:(BOOL)arg1 hasBeenToggled:(BOOL)arg2 identifier:(id)arg3 ;
-(BOOL)hasBeenPreviouslyToggled;
-(void)setHasBeenPreviouslyToggled:(BOOL)arg1 ;
-(id)initWithItemResponseDictionary:(id)arg1 ;
-(void)setIsToggled:(BOOL)arg1 ;
-(NSString *)identifier;
-(BOOL)isToggled;
@end

