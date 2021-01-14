/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

@class NSDictionary;


@protocol CRKIDSPrimitives
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
@required
-(NSDictionary *)debugInfo;
-(void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 completion:(/*^block*/id)arg4;
-(void)listenForMessagesWithHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;

@end

