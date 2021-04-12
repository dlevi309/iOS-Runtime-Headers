/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(BOOL)isToggled;
-(id)initWithItemResponseDictionary:(id)arg1 ;
-(NSDictionary *)itemResponseDictionary;
-(id)initWithToggleState:(BOOL)arg1 hasBeenToggled:(BOOL)arg2 identifier:(id)arg3 ;
-(void)setIsToggled:(BOOL)arg1 ;
-(BOOL)hasBeenPreviouslyToggled;
-(void)setHasBeenPreviouslyToggled:(BOOL)arg1 ;
@end

