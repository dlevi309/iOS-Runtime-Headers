/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/

@class IDSService;


@protocol ANIDSConnectionProvider <ANConnectionProvider>
@property (nonatomic,readonly) IDSService * service; 
@required
-(IDSService *)service;
-(id)sendMessage:(id)arg1 destinationID:(id)arg2;

@end

