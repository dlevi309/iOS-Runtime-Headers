/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/


@protocol AXUIService, NSObjectNSCopying;
@class NSMutableArray;

@interface AXUIServiceContext : NSObject {

	id<AXUIService> _service;
	id<NSObject><NSCopying> _serviceIdentifier;
	NSMutableArray* _clientMessengers;

}

@property (nonatomic,retain) id<AXUIService> service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientMessengers;                    //@synthesize clientMessengers=_clientMessengers - In the implementation block
@property (nonatomic,readonly) unsigned long long clientsCount; 
-(BOOL)hasClientWithIdentifier:(id)arg1 ;
-(void)setClientMessengers:(NSMutableArray *)arg1 ;
-(void)enumerateClientsUsingBlock:(/*^block*/id)arg1 ;
-(void)setServiceIdentifier:(id<NSObject><NSCopying>)arg1 ;
-(NSMutableArray *)clientMessengers;
-(unsigned long long)clientsCount;
-(void)addClientWithIdentifier:(id)arg1 connection:(id)arg2 ;
-(id<NSObject><NSCopying>)serviceIdentifier;
-(unsigned long long)_indexOfClientWithIdentifier:(id)arg1 ;
-(void)setService:(id<AXUIService>)arg1 ;
-(void)removeClientWithIdentifier:(id)arg1 ;
-(id)initWithService:(id)arg1 serviceIdentifier:(id)arg2 ;
-(id)clientMessengerWithIdentifier:(id)arg1 ;
-(id<AXUIService>)service;
@end

