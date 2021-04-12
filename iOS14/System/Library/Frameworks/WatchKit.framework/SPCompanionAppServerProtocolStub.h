/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
*/

#import <libobjc.A.dylib/SPCompanionAppServerProtocol.h>

@class NSString;

@interface SPCompanionAppServerProtocolStub : NSObject <SPCompanionAppServerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendCacheRequest:(id)arg1 identifier:(id)arg2 ;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 ;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)fetchNotificationForNotificationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestTimingData:(id)arg1 timingMetaData:(id)arg2 ;
-(void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2 ;
@end

