/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol OS_dispatch_queue;
@class NSString, NSURL, CKContainer, NSNumber, NSOperationQueue, NSObject;

@interface CKCodeService : NSObject {

	NSString* _serviceName;
	NSURL* _serviceInstanceURL;
	CKContainer* _container;
	NSNumber* _boxedDatabaseScope;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _underlyingDispatchQueue;

}

@property (assign,nonatomic,__weak) CKContainer * container;                                    //@synthesize container=_container - In the implementation block
@property (nonatomic,copy) NSNumber * boxedDatabaseScope;                                       //@synthesize boxedDatabaseScope=_boxedDatabaseScope - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> underlyingDispatchQueue;              //@synthesize underlyingDispatchQueue=_underlyingDispatchQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                                     //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * serviceInstanceURL;                                 //@synthesize serviceInstanceURL=_serviceInstanceURL - In the implementation block
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSOperationQueue *)operationQueue;
-(id)init;
-(void)addOperation:(id)arg1 ;
-(void)setBoxedDatabaseScope:(NSNumber *)arg1 ;
-(void)setContainer:(CKContainer *)arg1 ;
-(id)description;
-(NSNumber *)boxedDatabaseScope;
-(NSURL *)serviceInstanceURL;
-(id)_initWithContainer:(id)arg1 serviceName:(id)arg2 boxedDatabaseScope:(id)arg3 serviceInstanceURL:(id)arg4 ;
-(NSString *)serviceName;
-(NSObject*<OS_dispatch_queue>)underlyingDispatchQueue;
-(void)setUnderlyingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)CKStatusReportArray;
-(CKContainer *)container;
@end

