/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

#import <libobjc.A.dylib/TRINamespaceUpdateProtocol.h>

@class NSString;

@interface TRINamespaceUpdateNotification : NSObject <TRINamespaceUpdateProtocol> {

	unsigned _namespaceId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned namespaceId;                //@synthesize namespaceId=_namespaceId - In the implementation block
+(id)notificationNameForNamespaceId:(unsigned)arg1 ;
+(id)registerUpdateForNamespaceId:(unsigned)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
+(void)deregisterUpdateWithToken:(id)arg1 ;
+(BOOL)notifyUpdateForNamespaceId:(unsigned)arg1 ;
-(unsigned)namespaceId;
-(id)initWithNamespaceId:(unsigned)arg1 ;
@end

