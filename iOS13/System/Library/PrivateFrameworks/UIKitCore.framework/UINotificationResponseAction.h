/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <BaseBoard/BSAction.h>

@class UNNotificationResponse;

@interface UINotificationResponseAction : BSAction {

	UNNotificationResponse* _response;

}

@property (nonatomic,retain,readonly) UNNotificationResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) BOOL isRemote; 
@property (nonatomic,readonly) BOOL isDefaultAction; 
-(UNNotificationResponse *)response;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)UIActionType;
-(BOOL)isDefaultAction;
-(BOOL)isRemote;
-(id)_trigger;
-(id)initWithResponse:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isLocal;
@end

