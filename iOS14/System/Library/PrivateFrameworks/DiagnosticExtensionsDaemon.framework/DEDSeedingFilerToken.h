/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/


@class NSNumber, NSString;

@interface DEDSeedingFilerToken : NSObject {

	NSNumber* _entityID;
	NSString* _token;
	NSString* _dsid;
	long long _submissionType;

}

@property (nonatomic,readonly) NSNumber * entityID;                   //@synthesize entityID=_entityID - In the implementation block
@property (nonatomic,readonly) NSString * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSString * dsid;                       //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) long long submissionType;              //@synthesize submissionType=_submissionType - In the implementation block
-(NSNumber *)entityID;
-(NSString *)dsid;
-(NSString *)token;
-(long long)submissionType;
-(id)initWithEntityID:(id)arg1 type:(long long)arg2 token:(id)arg3 dsid:(id)arg4 ;
-(id)compiledEntityID;
@end

