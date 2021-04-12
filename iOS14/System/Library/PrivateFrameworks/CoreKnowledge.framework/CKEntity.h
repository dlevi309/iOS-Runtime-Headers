/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/


@class UIImage, IMHandle, IMAccount, IMChat, CNContact, NSString;

@interface CKEntity : NSObject {

	BOOL _enlargedContactImage;
	UIImage* _transcriptContactImage;
	UIImage* _transcriptDrawerContactImage;
	IMHandle* _handle;
	IMAccount* _chatAccount;
	IMChat* _chat;
	CNContact* _cnContact;

}

@property (nonatomic,retain) IMHandle * handle;                                         //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) IMAccount * chatAccount;                                   //@synthesize chatAccount=_chatAccount - In the implementation block
@property (nonatomic,retain) IMChat * chat;                                             //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) CNContact * cnContact;                                     //@synthesize cnContact=_cnContact - In the implementation block
@property (nonatomic,readonly) IMHandle * defaultIMHandle; 
@property (nonatomic,readonly) NSString * propertyType; 
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,copy,readonly) NSString * abbreviatedDisplayName; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * fullName; 
@property (nonatomic,copy,readonly) NSString * rawAddress; 
@property (nonatomic,copy,readonly) NSString * originalAddress; 
@property (nonatomic,copy,readonly) NSString * IDSCanonicalAddress; 
@property (nonatomic,copy,readonly) NSString * textToneIdentifier; 
@property (nonatomic,copy,readonly) NSString * textVibrationIdentifier; 
@property (nonatomic,readonly) UIImage * transcriptContactImage;                        //@synthesize transcriptContactImage=_transcriptContactImage - In the implementation block
@property (nonatomic,readonly) UIImage * transcriptDrawerContactImage;                  //@synthesize transcriptDrawerContactImage=_transcriptDrawerContactImage - In the implementation block
@property (nonatomic,readonly) UIImage * locationMapViewContactImage; 
@property (nonatomic,readonly) UIImage * locationShareBalloonContactImage; 
@property (assign,nonatomic) BOOL enlargedContactImage;                                 //@synthesize enlargedContactImage=_enlargedContactImage - In the implementation block
+(id)copyEntityForAddressString:(id)arg1 ;
+(BOOL)string:(id)arg1 hasPrefix:(id)arg2 ;
+(id)entityForAddress:(id)arg1 ;
+(id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2 ;
-(BOOL)isMe;
-(void)setHandle:(IMHandle *)arg1 ;
-(IMChat *)chat;
-(NSString *)fullName;
-(IMHandle *)handle;
-(id)pinnedConversationContactItemIdentifier;
-(CNContact *)cnContact;
-(id)personViewControllerWithDelegate:(id)arg1 isUnknown:(BOOL*)arg2 contactStoreProvider:(id)arg3 ;
-(id)initWithIMHandle:(id)arg1 ;
-(NSString *)textToneIdentifier;
-(NSString *)textVibrationIdentifier;
-(void)setChat:(IMChat *)arg1 ;
-(id)cnContactWithKeys:(id)arg1 ;
-(UIImage *)locationShareBalloonContactImage;
-(NSString *)name;
-(void)addToken:(id)arg1 ifAvailableToTokens:(id)arg2 ;
-(id)description;
-(NSString *)propertyType;
-(IMHandle *)defaultIMHandle;
-(NSString *)IDSCanonicalAddress;
-(unsigned long long)hash;
-(id)mentionsHandleID;
-(id)displayNameMatchingInputText:(id)arg1 ;
-(BOOL)isMentionable;
-(id)mentionTokens;
-(IMAccount *)chatAccount;
-(id)personViewControllerWithDelegate:(id)arg1 isUnknown:(BOOL*)arg2 ;
-(BOOL)_allowedByScreenTime;
-(void)setCnContact:(CNContact *)arg1 ;
-(id)initWithChat:(id)arg1 imHandle:(id)arg2 ;
-(void)_invalidateContactStoreCache:(id)arg1 ;
-(void)_invalidatePartialContactStoreCache:(id)arg1 ;
-(id)cnContactWithKeys:(id)arg1 shouldFetchSuggestedContact:(BOOL)arg2 ;
-(BOOL)enlargedContactImage;
-(id)_croppedImageFromImageData:(id)arg1 ;
-(void)_setBusinessInfoForMutableContact:(id)arg1 enlargedImageData:(id)arg2 ;
-(void)setEnlargedContactImage:(BOOL)arg1 ;
-(NSString *)abbreviatedDisplayName;
-(NSString *)originalAddress;
-(UIImage *)locationMapViewContactImage;
-(UIImage *)transcriptContactImage;
-(UIImage *)transcriptDrawerContactImage;
-(void)setChatAccount:(IMAccount *)arg1 ;
-(NSString *)rawAddress;
-(BOOL)isEqual:(id)arg1 ;
@end

