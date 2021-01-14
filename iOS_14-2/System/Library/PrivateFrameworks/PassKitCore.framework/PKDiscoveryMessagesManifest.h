/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSArray;

@interface PKDiscoveryMessagesManifest : NSObject {

	long long _version;
	NSArray* _engagementMessages;
	NSArray* _notifications;

}

@property (nonatomic,readonly) long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * engagementMessages;              //@synthesize engagementMessages=_engagementMessages - In the implementation block
@property (nonatomic,readonly) NSArray * notifications;                   //@synthesize notifications=_notifications - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)engagementMessages;
-(NSArray *)notifications;
-(long long)version;
@end

