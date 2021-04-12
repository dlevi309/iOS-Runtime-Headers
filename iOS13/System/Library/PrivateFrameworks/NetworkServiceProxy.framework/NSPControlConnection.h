/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@interface NSPControlConnection : NSObject {

	unsigned long long _flowIdentifier;

}

@property (readonly) unsigned long long flowIdentifier;              //@synthesize flowIdentifier=_flowIdentifier - In the implementation block
-(unsigned long long)flowIdentifier;
-(id)initFromMetadata:(id)arg1 ;
-(id)initFromStream:(id)arg1 ;
-(id)initFromTask:(id)arg1 ;
-(id)initFromConnection:(id)arg1 ;
-(id)initFromNWConnection:(id)arg1 ;
-(void)fetchConnectionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
@end

