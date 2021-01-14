/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSDictionary;


@protocol CRKIDSLocalPrimitives
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
@required
-(NSDictionary *)debugInfo;
-(id)listenForMessageSendsWithHandler:(/*^block*/id)arg1;
-(BOOL)sendMessage:(id)arg1 toDestinationAddress:(id)arg2 identifier:(id*)arg3 error:(id*)arg4;
-(id)accountForSourceAppleID:(id)arg1;
-(id)listenForMessageReceivesWithHandler:(/*^block*/id)arg1;
-(id)listenForAccountAdditionsWithHandler:(/*^block*/id)arg1;

@end

