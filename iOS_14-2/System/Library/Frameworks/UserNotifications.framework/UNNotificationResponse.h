/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotification, NSString, BSServiceConnectionEndpoint, UIScene;

@interface UNNotificationResponse : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {

	UNNotification* _notification;
	NSString* _actionIdentifier;
	NSString* _originIdentifier;
	BSServiceConnectionEndpoint* _targetConnectionEndpoint;
	NSString* _targetSceneIdentifier;

}

@property (nonatomic,readonly) UIScene * targetScene; 
@property (nonatomic,copy,readonly) NSString * originIdentifier;                                    //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) BSServiceConnectionEndpoint * targetConnectionEndpoint;              //@synthesize targetConnectionEndpoint=_targetConnectionEndpoint - In the implementation block
@property (nonatomic,readonly) NSString * targetSceneIdentifier;                                    //@synthesize targetSceneIdentifier=_targetSceneIdentifier - In the implementation block
@property (nonatomic,copy,readonly) UNNotification * notification;                                  //@synthesize notification=_notification - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionIdentifier;                                    //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 ;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 ;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 ;
-(UIScene *)targetScene;
-(BSServiceConnectionEndpoint *)targetConnectionEndpoint;
-(UNNotification *)notification;
-(NSString *)originIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)actionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)targetSceneIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4 targetSceneIdentifier:(id)arg5 ;
-(id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 ;
@end

