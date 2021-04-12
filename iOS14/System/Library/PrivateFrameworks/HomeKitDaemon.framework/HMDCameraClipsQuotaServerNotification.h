/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSDictionary;

@interface HMDCameraClipsQuotaServerNotification : HMFObject {

	NSString* _containerIdentifier;
	long long _reason;
	NSString* _requestID;
	NSString* _userDSID;

}

@property (copy,readonly) NSString * containerIdentifier;                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (readonly) long long reason;                                          //@synthesize reason=_reason - In the implementation block
@property (copy,readonly) NSString * requestID;                                 //@synthesize requestID=_requestID - In the implementation block
@property (copy,readonly) NSString * userDSID;                                  //@synthesize userDSID=_userDSID - In the implementation block
@property (copy,readonly) NSDictionary * dictionaryRepresentation; 
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)requestID;
-(NSString *)containerIdentifier;
-(NSString *)userDSID;
-(long long)reason;
-(id)initWithContainerIdentifier:(id)arg1 reason:(long long)arg2 requestID:(id)arg3 userDSID:(id)arg4 ;
@end

