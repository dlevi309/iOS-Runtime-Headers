/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSString, CNContact;

@interface CKDetailsContactsViewModel : NSObject {

	BOOL _showsLocation;
	BOOL _showsMessageButton;
	BOOL _showsFaceTimeVideoButton;
	BOOL _showsPhoneButton;
	BOOL _showsScreenSharingButton;
	BOOL _isPendingRecipient;
	BOOL _verified;
	NSString* _preferredHandle;
	NSString* _entityName;
	NSString* _locationString;
	CNContact* _contact;

}

@property (nonatomic,copy) NSString * preferredHandle;                   //@synthesize preferredHandle=_preferredHandle - In the implementation block
@property (nonatomic,copy) NSString * entityName;                        //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,copy) NSString * locationString;                    //@synthesize locationString=_locationString - In the implementation block
@property (assign,nonatomic) BOOL showsLocation;                         //@synthesize showsLocation=_showsLocation - In the implementation block
@property (assign,nonatomic) BOOL showsMessageButton;                    //@synthesize showsMessageButton=_showsMessageButton - In the implementation block
@property (assign,nonatomic) BOOL showsFaceTimeVideoButton;              //@synthesize showsFaceTimeVideoButton=_showsFaceTimeVideoButton - In the implementation block
@property (assign,nonatomic) BOOL showsPhoneButton;                      //@synthesize showsPhoneButton=_showsPhoneButton - In the implementation block
@property (assign,nonatomic) BOOL showsScreenSharingButton;              //@synthesize showsScreenSharingButton=_showsScreenSharingButton - In the implementation block
@property (nonatomic,retain) CNContact * contact;                        //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) BOOL isPendingRecipient;                    //@synthesize isPendingRecipient=_isPendingRecipient - In the implementation block
@property (assign,nonatomic) BOOL verified;                              //@synthesize verified=_verified - In the implementation block
+(id)descriptorForContactRequiredKeys;
-(NSString *)entityName;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithPreferredHandle:(id)arg1 entityName:(id)arg2 locationString:(id)arg3 showsLocation:(BOOL)arg4 showsMessageButton:(BOOL)arg5 showsFaceTimeVideoButton:(BOOL)arg6 showsPhoneButton:(BOOL)arg7 showsScreenSharingButton:(BOOL)arg8 contact:(id)arg9 isPendingRecipient:(BOOL)arg10 verified:(BOOL)arg11 ;
-(NSString *)locationString;
-(BOOL)verified;
-(void)setEntityName:(NSString *)arg1 ;
-(void)setLocationString:(NSString *)arg1 ;
-(void)setVerified:(BOOL)arg1 ;
-(NSString *)preferredHandle;
-(BOOL)showsLocation;
-(void)setShowsLocation:(BOOL)arg1 ;
-(void)setShowsMessageButton:(BOOL)arg1 ;
-(void)setShowsPhoneButton:(BOOL)arg1 ;
-(void)setShowsFaceTimeVideoButton:(BOOL)arg1 ;
-(void)setShowsScreenSharingButton:(BOOL)arg1 ;
-(void)setIsPendingRecipient:(BOOL)arg1 ;
-(BOOL)showsMessageButton;
-(BOOL)showsFaceTimeVideoButton;
-(BOOL)showsPhoneButton;
-(BOOL)showsScreenSharingButton;
-(BOOL)isPendingRecipient;
-(void)setPreferredHandle:(NSString *)arg1 ;
@end

