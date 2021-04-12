/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


#import <IMCore/IMCore-Structs.h>
@class NSString, NSArray;

@interface IMSPIChat : NSObject {

	BOOL _isGroup;
	BOOL _isBlackholed;
	NSString* _guid;
	NSString* _chatIdentifier;
	NSString* _serviceName;
	NSString* _displayName;
	NSArray* _handles;

}

@property (retain) NSString * guid;                        //@synthesize guid=_guid - In the implementation block
@property (retain) NSString * chatIdentifier;              //@synthesize chatIdentifier=_chatIdentifier - In the implementation block
@property (retain) NSString * serviceName;                 //@synthesize serviceName=_serviceName - In the implementation block
@property (retain) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (assign) BOOL isGroup;                           //@synthesize isGroup=_isGroup - In the implementation block
@property (retain) NSArray * handles;                      //@synthesize handles=_handles - In the implementation block
@property (readonly) BOOL isBlackholed;                    //@synthesize isBlackholed=_isBlackholed - In the implementation block
+(void)enumerateAllChatsWithBlock:(/*^block*/id)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(NSArray *)handles;
-(NSString *)guid;
-(BOOL)isGroup;
-(void)setIsGroup:(BOOL)arg1 ;
-(BOOL)isBlackholed;
-(void)setChatIdentifier:(NSString *)arg1 ;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(NSString *)chatIdentifier;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)displayName;
-(id)initWithChatRecord:(IMDChatRecordStructRef)arg1 ;
-(void)enumerateAllAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateAllMessagesWithBlock:(/*^block*/id)arg1 ;
@end

