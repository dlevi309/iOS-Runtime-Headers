/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
*/


@class NSString, NSArray;

@interface AXSSInterDeviceSwitchEvent : NSObject {

	BOOL _isDown;
	NSString* _switchIdentifier;
	NSString* _switchDisplayName;
	NSString* _deviceIdentifier;
	NSArray* _actions;
	NSArray* _longPressActions;

}

@property (nonatomic,copy) NSString * switchIdentifier;               //@synthesize switchIdentifier=_switchIdentifier - In the implementation block
@property (nonatomic,copy) NSString * switchDisplayName;              //@synthesize switchDisplayName=_switchDisplayName - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;               //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * actions;                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSArray * longPressActions;              //@synthesize longPressActions=_longPressActions - In the implementation block
@property (assign,nonatomic) BOOL isDown;                             //@synthesize isDown=_isDown - In the implementation block
-(void)setActions:(NSArray *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSArray *)actions;
-(BOOL)isDown;
-(id)description;
-(id)initWithSwitchIdentifier:(id)arg1 switchDisplayName:(id)arg2 deviceIdentifier:(id)arg3 actions:(id)arg4 longPressActions:(id)arg5 isDown:(BOOL)arg6 ;
-(NSString *)switchDisplayName;
-(void)setSwitchDisplayName:(NSString *)arg1 ;
-(NSString *)switchIdentifier;
-(void)setSwitchIdentifier:(NSString *)arg1 ;
-(NSArray *)longPressActions;
-(id)initWithSwitchIdentifier:(id)arg1 switchDisplayName:(id)arg2 deviceIdentifier:(id)arg3 actions:(id)arg4 isDown:(BOOL)arg5 ;
-(void)setLongPressActions:(NSArray *)arg1 ;
-(void)setIsDown:(BOOL)arg1 ;
@end

