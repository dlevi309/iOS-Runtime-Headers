/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString, CKContainer;

@interface MLCloudSession : NSObject {

	NSString* _serviceName;
	CKContainer* _container;
	NSString* _teamIdentifier;

}

@property (nonatomic,retain) NSString * serviceName;                        //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) CKContainer * container;                       //@synthesize container=_container - In the implementation block
@property (nonatomic,copy,readonly) NSString * teamIdentifier;              //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
-(id)initWithTeamIdentifier:(id)arg1 ;
-(void)invokeRPC:(id)arg1 request:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)fetchKeyResponseFromServerForKeyID:(id)arg1 signedKeyRequest:(id)arg2 error:(id*)arg3 ;
-(void)setContainer:(CKContainer *)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(CKContainer *)container;
@end

