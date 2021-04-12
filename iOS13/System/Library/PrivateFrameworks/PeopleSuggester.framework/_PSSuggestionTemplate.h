/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class NSString, INImage, NSArray, NSDictionary;

@interface _PSSuggestionTemplate : NSObject {

	NSString* _bundleID;
	NSString* _interactionRecipients;
	INImage* _image;
	NSString* _groupName;
	NSArray* _recipientContactIDs;
	NSArray* _recipientEmailAddresses;
	NSArray* _recipientPhoneNumbers;
	NSDictionary* _contactIdToHandleMapping;
	NSString* _reason;
	NSString* _reasonType;

}

@property (nonatomic,readonly) NSString * bundleID;                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * interactionRecipients;                     //@synthesize interactionRecipients=_interactionRecipients - In the implementation block
@property (nonatomic,readonly) INImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSString * groupName;                                 //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) NSArray * recipientContactIDs;                        //@synthesize recipientContactIDs=_recipientContactIDs - In the implementation block
@property (nonatomic,readonly) NSArray * recipientEmailAddresses;                    //@synthesize recipientEmailAddresses=_recipientEmailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * recipientPhoneNumbers;                      //@synthesize recipientPhoneNumbers=_recipientPhoneNumbers - In the implementation block
@property (nonatomic,readonly) NSDictionary * contactIdToHandleMapping;              //@synthesize contactIdToHandleMapping=_contactIdToHandleMapping - In the implementation block
@property (nonatomic,readonly) NSString * reason;                                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSString * reasonType;                                //@synthesize reasonType=_reasonType - In the implementation block
-(NSString *)reason;
-(NSString *)bundleID;
-(INImage *)image;
-(NSString *)groupName;
-(NSArray *)recipientEmailAddresses;
-(NSString *)reasonType;
-(NSString *)interactionRecipients;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 image:(id)arg3 groupName:(id)arg4 recipientContactIDs:(id)arg5 recipientEmailAddresses:(id)arg6 recipientPhoneNumbers:(id)arg7 contactIdToHandleMapping:(id)arg8 reason:(id)arg9 reasonType:(id)arg10 ;
-(NSArray *)recipientContactIDs;
-(NSArray *)recipientPhoneNumbers;
-(id)suggestionWithContactIDMapping:(id)arg1 phoneMapping:(id)arg2 emailMapping:(id)arg3 contactStore:(id)arg4 contactKeysToFetch:(id)arg5 ;
-(NSDictionary *)contactIdToHandleMapping;
@end

