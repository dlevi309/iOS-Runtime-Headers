/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

@class PBCodable, TBLocalFetchRequestDescriptor, NSSet;


@protocol TBFetchRequestDescriptor <NSObject>
@property (nonatomic,readonly) PBCodable * remoteRequest; 
@property (nonatomic,readonly) Class remoteRequestClass; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) TBLocalFetchRequestDescriptor * localFetchDescriptor; 
@property (nonatomic,readonly) TBLocalFetchRequestDescriptor * preferLocalFetchDescriptor; 
@property (nonatomic,readonly) NSSet * tileItems; 
@optional
-(NSSet *)tileItems;
-(TBLocalFetchRequestDescriptor *)preferLocalFetchDescriptor;

@required
-(PBCodable *)remoteRequest;
-(unsigned long long)type;
-(Class)remoteRequestClass;
-(TBLocalFetchRequestDescriptor *)localFetchDescriptor;

@end

