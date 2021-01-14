/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
*/


@interface NSPControlConnection : NSObject {

	unsigned long long _flowIdentifier;

}

@property (readonly) unsigned long long flowIdentifier;              //@synthesize flowIdentifier=_flowIdentifier - In the implementation block
-(unsigned long long)flowIdentifier;
-(id)initFromMetadata:(id)arg1 ;
-(id)initFromConnection:(id)arg1 ;
-(id)initFromTask:(id)arg1 ;
-(id)initFromStream:(id)arg1 ;
-(void)fetchConnectionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initFromNWConnection:(id)arg1 ;
@end

