/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isLocal;
-(long long)UIActionType;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(BOOL)isRemote;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(UNNotificationResponse *)response;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithResponse:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)_trigger;
-(BOOL)isDefaultAction;
@end

