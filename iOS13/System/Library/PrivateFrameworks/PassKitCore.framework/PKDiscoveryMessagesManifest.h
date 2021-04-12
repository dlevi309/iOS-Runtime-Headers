/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)version;
-(NSArray *)notifications;
-(NSArray *)engagementMessages;
@end

