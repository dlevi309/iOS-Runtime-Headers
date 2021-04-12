/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSString, NSDate, NSArray, NSAttributedString, NSMutableArray;

@interface CKDBMessage : NSObject {

	NSString* _text;
	NSString* _subject;
	NSString* _address;
	NSString* _groupID;
	NSString* _guid;
	NSString* _madridRoomname;
	NSString* _displayName;
	NSString* _madridService;
	NSString* _madridAccountGUID;
	NSString* _madridChatGUID;
	NSString* _madridChatIdentifier;
	BOOL _isMadrid;
	BOOL _hasBeenRead;
	BOOL _isOutgoing;
	BOOL _isVisibleByDefault;
	BOOL _isAudioMessage;
	long long _madridType;
	long long _identifier;
	NSDate* _date;
	NSArray* _recipients;
	NSString* _plainBody;
	NSAttributedString* _madridAttributedBody;
	NSMutableArray* _mediaObjects;
	NSString* _voicemailString;
	NSString* _madridAccountLogin;

}

@property (nonatomic,copy,readonly) NSString * madridChatGUID;                         //@synthesize madridChatGUID=_madridChatGUID - In the implementation block
@property (nonatomic,readonly) BOOL isVisibleByDefault;                                //@synthesize isVisibleByDefault=_isVisibleByDefault - In the implementation block
@property (assign,nonatomic) long long identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,readonly) NSArray * mediaObjects;                                 //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentText; 
@property (nonatomic,readonly) BOOL hasAttachments; 
@property (nonatomic,readonly) NSString * plainBody;                                   //@synthesize plainBody=_plainBody - In the implementation block
@property (nonatomic,readonly) NSString * groupID; 
@property (nonatomic,readonly) NSString * text;                                        //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * subject;                                     //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * address;                                     //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * formattedAddress; 
@property (nonatomic,readonly) NSString * guid;                                        //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSString * madridRoomname;                              //@synthesize madridRoomname=_madridRoomname - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * madridService;                               //@synthesize madridService=_madridService - In the implementation block
@property (nonatomic,readonly) NSString * madridAccountLogin;                          //@synthesize madridAccountLogin=_madridAccountLogin - In the implementation block
@property (nonatomic,readonly) NSString * madridAccountGUID;                           //@synthesize madridAccountGUID=_madridAccountGUID - In the implementation block
@property (nonatomic,readonly) NSString * madridChatIdentifier;                        //@synthesize madridChatIdentifier=_madridChatIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isMadrid;                                          //@synthesize isMadrid=_isMadrid - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenRead;                                       //@synthesize hasBeenRead=_hasBeenRead - In the implementation block
@property (nonatomic,readonly) BOOL isAudioMessage;                                    //@synthesize isAudioMessage=_isAudioMessage - In the implementation block
@property (nonatomic,readonly) BOOL isOutgoing;                                        //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (nonatomic,readonly) long long madridType;                                   //@synthesize madridType=_madridType - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSAttributedString * madridAttributedBody;              //@synthesize madridAttributedBody=_madridAttributedBody - In the implementation block
-(NSArray *)recipients;
-(BOOL)isOutgoing;
-(NSString *)subject;
-(NSString *)guid;
-(BOOL)isMadrid;
-(NSString *)groupID;
-(id)attachmentText:(BOOL)arg1 ;
-(id)initWithRecordID:(long long)arg1 ;
-(id)voicemailString;
-(id)initWithMadridMessageGUID:(id)arg1 ;
-(BOOL)hasAttachments;
-(BOOL)hasBeenRead;
-(NSString *)attachmentText;
-(BOOL)senderIsVoicemail;
-(NSString *)madridRoomname;
-(NSString *)madridService;
-(NSString *)madridAccountLogin;
-(NSString *)madridAccountGUID;
-(NSAttributedString *)madridAttributedBody;
-(NSString *)madridChatGUID;
-(BOOL)isVisibleByDefault;
-(NSString *)madridChatIdentifier;
-(NSArray *)mediaObjects;
-(id)description;
-(NSString *)address;
-(NSString *)plainBody;
-(NSString *)text;
-(id)alertImage;
-(BOOL)isAudioMessage;
-(long long)madridType;
-(void)setIdentifier:(long long)arg1 ;
-(NSDate *)date;
-(long long)identifier;
-(id)previewText;
-(NSString *)displayName;
-(NSString *)formattedAddress;
@end

