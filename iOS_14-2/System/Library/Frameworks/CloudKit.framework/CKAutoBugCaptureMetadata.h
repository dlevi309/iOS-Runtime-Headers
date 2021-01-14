/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSString, CKContainerID, NSError;

@interface CKAutoBugCaptureMetadata : NSObject {

	NSString* _procName;
	CKContainerID* _containerID;
	NSError* _errorPayload;
	long long _reason;

}

@property (nonatomic,copy) NSString * procName;                      //@synthesize procName=_procName - In the implementation block
@property (nonatomic,copy) CKContainerID * containerID;              //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) NSError * errorPayload;                   //@synthesize errorPayload=_errorPayload - In the implementation block
@property (assign,nonatomic) long long reason;                       //@synthesize reason=_reason - In the implementation block
-(CKContainerID *)containerID;
-(NSString *)procName;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(long long)reason;
-(void)setProcName:(NSString *)arg1 ;
-(NSError *)errorPayload;
-(void)setErrorPayload:(NSError *)arg1 ;
-(void)setReason:(long long)arg1 ;
@end

