/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)reason;
-(void)setReason:(long long)arg1 ;
-(CKContainerID *)containerID;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(NSString *)procName;
-(void)setProcName:(NSString *)arg1 ;
-(NSError *)errorPayload;
-(void)setErrorPayload:(NSError *)arg1 ;
@end

