/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)displayName;
-(NSString *)serviceName;
-(NSArray *)handles;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)isGroup;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setHandles:(NSArray *)arg1 ;
-(NSString *)chatIdentifier;
-(void)setChatIdentifier:(NSString *)arg1 ;
-(BOOL)isBlackholed;
-(void)setIsGroup:(BOOL)arg1 ;
-(id)initWithChatRecord:(IMDChatRecordStructRef)arg1 ;
-(void)enumerateAllAttachmentsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateAllMessagesWithBlock:(/*^block*/id)arg1 ;
@end

