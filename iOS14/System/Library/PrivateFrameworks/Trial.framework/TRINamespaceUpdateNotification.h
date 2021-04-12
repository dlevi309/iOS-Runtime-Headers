/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/TRINamespaceUpdateProtocol.h>

@protocol TRINotificationToken;
@class NSString;

@interface TRINamespaceUpdateNotification : NSObject <TRINamespaceUpdateProtocol> {

	NSString* _namespaceName;
	id<TRINotificationToken> _token;

}

@property (nonatomic,readonly) unsigned namespaceId; 
@property (nonatomic,readonly) NSString * namespaceName;                    //@synthesize namespaceName=_namespaceName - In the implementation block
@property (nonatomic,readonly) id<TRINotificationToken> token;              //@synthesize token=_token - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)registerUpdateForNamespaceName:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(BOOL)notifyUpdateForNamespaceName:(id)arg1 ;
+(void)deregisterUpdateWithToken:(id)arg1 ;
+(id)notificationNameForNamespaceName:(id)arg1 ;
-(unsigned)namespaceId;
-(id)initWithNamespaceName:(id)arg1 token:(id)arg2 ;
-(NSString *)namespaceName;
-(id<TRINotificationToken>)token;
@end

