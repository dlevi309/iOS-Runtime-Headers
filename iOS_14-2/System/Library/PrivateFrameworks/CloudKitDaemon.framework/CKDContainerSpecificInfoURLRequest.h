/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, CKDContainerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest {

	BOOL _requireUserIDs;
	NSString* _containerIdentifier;
	CKDContainerInfo* _containerInfo;

}

@property (nonatomic,copy) CKDContainerInfo * containerInfo;              //@synthesize containerInfo=_containerInfo - In the implementation block
@property (assign,nonatomic) BOOL requireUserIDs;                         //@synthesize requireUserIDs=_requireUserIDs - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
-(long long)partitionType;
-(BOOL)allowsAnonymousAccount;
-(id)url;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(BOOL)usesiCloudAuthToken;
-(BOOL)usesCloudKitAuthToken;
-(void)requestDidParseJSONObject:(id)arg1 ;
-(long long)serverType;
-(BOOL)requiresConfiguration;
-(BOOL)allowsAuthedAccount;
-(BOOL)requiresDeviceID;
-(BOOL)hasRequestBody;
-(BOOL)requireUserIDs;
-(void)setContainerInfo:(CKDContainerInfo *)arg1 ;
-(CKDContainerInfo *)containerInfo;
-(id)initWithOperation:(id)arg1 containerIdentifier:(id)arg2 ;
-(void)setRequireUserIDs:(BOOL)arg1 ;
@end

