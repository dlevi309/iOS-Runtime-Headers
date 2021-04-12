/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSArray, NSString, NSData;

@interface CLSMessageChat : NSObject {

	NSArray* _recipientHandles;
	NSArray* _persons;
	long long _style;
	long long _state;
	long long _isArchived;
	long long _isFiltered;
	long long _hasHadSuccessfulQuery;
	long long _lastReadMessageTimeStamp;
	NSString* _accountID;
	NSData* _properties;
	NSString* _chatIdentifier;
	NSString* _serviceName;
	NSString* _guid;
	NSString* _roomname;
	NSString* _displayName;
	NSString* _lastAddressedLocalHandle;
	NSString* _accountLogin;
	NSString* _groupID;
	NSString* _engramID;
	NSString* _originalGroupID;

}

@property (nonatomic,readonly) NSArray * persons;                                //@synthesize persons=_persons - In the implementation block
@property (nonatomic,readonly) NSArray * recipientHandles;                       //@synthesize recipientHandles=_recipientHandles - In the implementation block
@property (nonatomic,readonly) long long style;                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long isArchived;                             //@synthesize isArchived=_isArchived - In the implementation block
@property (nonatomic,readonly) long long isFiltered;                             //@synthesize isFiltered=_isFiltered - In the implementation block
@property (nonatomic,readonly) long long hasHadSuccessfulQuery;                  //@synthesize hasHadSuccessfulQuery=_hasHadSuccessfulQuery - In the implementation block
@property (nonatomic,readonly) long long lastReadMessageTimeStamp;               //@synthesize lastReadMessageTimeStamp=_lastReadMessageTimeStamp - In the implementation block
@property (nonatomic,readonly) NSData * properties;                              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                             //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * chatIdentifier;                        //@synthesize chatIdentifier=_chatIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSString * roomname;                              //@synthesize roomname=_roomname - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * lastAddressedLocalHandle;              //@synthesize lastAddressedLocalHandle=_lastAddressedLocalHandle - In the implementation block
@property (nonatomic,readonly) NSString * accountLogin;                          //@synthesize accountLogin=_accountLogin - In the implementation block
@property (nonatomic,readonly) NSString * groupID;                               //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) NSString * engramID;                              //@synthesize engramID=_engramID - In the implementation block
@property (nonatomic,readonly) NSString * originalGroupID;                       //@synthesize originalGroupID=_originalGroupID - In the implementation block
+(void)enumerateAllChatsWithBlock:(/*^block*/id)arg1 ;
-(id)debugDescription;
-(long long)state;
-(NSString *)displayName;
-(NSString *)serviceName;
-(long long)style;
-(NSData *)properties;
-(NSString *)groupID;
-(NSString *)accountID;
-(long long)isFiltered;
-(NSString *)guid;
-(NSString *)chatIdentifier;
-(NSString *)engramID;
-(long long)isArchived;
-(long long)hasHadSuccessfulQuery;
-(id)initWithChatRecord:(IMDChatRecordStructRef)arg1 ;
-(void)enumerateAllAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateAllMessagesWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)persons;
-(NSString *)originalGroupID;
-(NSString *)lastAddressedLocalHandle;
-(long long)lastReadMessageTimeStamp;
-(id)allMessageGUIDs;
-(void)enumerateAllAssetIdentifiersWithBlock:(/*^block*/id)arg1 historyLimit:(double)arg2 assetsMapping:(id)arg3 ;
-(NSArray *)recipientHandles;
-(NSString *)roomname;
-(NSString *)accountLogin;
@end

