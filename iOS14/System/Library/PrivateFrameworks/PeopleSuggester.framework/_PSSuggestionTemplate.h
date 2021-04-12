/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSArray* _recipientDisplayNames;
	NSDictionary* _contactIdToHandleMapping;
	NSDictionary* _handleToDisplayNameMapping;
	NSString* _reason;
	NSString* _reasonType;

}

@property (nonatomic,readonly) NSString * bundleID;                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * interactionRecipients;                       //@synthesize interactionRecipients=_interactionRecipients - In the implementation block
@property (nonatomic,readonly) INImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) NSString * groupName;                                   //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) NSArray * recipientContactIDs;                          //@synthesize recipientContactIDs=_recipientContactIDs - In the implementation block
@property (nonatomic,readonly) NSArray * recipientEmailAddresses;                      //@synthesize recipientEmailAddresses=_recipientEmailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * recipientPhoneNumbers;                        //@synthesize recipientPhoneNumbers=_recipientPhoneNumbers - In the implementation block
@property (nonatomic,readonly) NSArray * recipientDisplayNames;                        //@synthesize recipientDisplayNames=_recipientDisplayNames - In the implementation block
@property (nonatomic,readonly) NSDictionary * contactIdToHandleMapping;                //@synthesize contactIdToHandleMapping=_contactIdToHandleMapping - In the implementation block
@property (nonatomic,readonly) NSDictionary * handleToDisplayNameMapping;              //@synthesize handleToDisplayNameMapping=_handleToDisplayNameMapping - In the implementation block
@property (nonatomic,readonly) NSString * reason;                                      //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSString * reasonType;                                  //@synthesize reasonType=_reasonType - In the implementation block
-(NSString *)reasonType;
-(NSString *)groupName;
-(INImage *)image;
-(id)description;
-(NSString *)reason;
-(NSString *)bundleID;
-(NSArray *)recipientContactIDs;
-(NSDictionary *)contactIdToHandleMapping;
-(NSArray *)recipientPhoneNumbers;
-(id)suggestionWithContactIDMapping:(id)arg1 phoneMapping:(id)arg2 emailMapping:(id)arg3 contactStore:(id)arg4 contactKeysToFetch:(id)arg5 ;
-(NSArray *)recipientEmailAddresses;
-(NSString *)interactionRecipients;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 image:(id)arg3 groupName:(id)arg4 recipientContactIDs:(id)arg5 recipientEmailAddresses:(id)arg6 recipientPhoneNumbers:(id)arg7 recipientDisplayNames:(id)arg8 contactIdToHandleMapping:(id)arg9 handleToDisplayNameMapping:(id)arg10 reason:(id)arg11 reasonType:(id)arg12 ;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 image:(id)arg3 groupName:(id)arg4 recipientContactIDs:(id)arg5 recipientEmailAddresses:(id)arg6 recipientPhoneNumbers:(id)arg7 recipientDisplayNames:(id)arg8 contactIdToHandleMapping:(id)arg9 reason:(id)arg10 reasonType:(id)arg11 ;
-(NSDictionary *)handleToDisplayNameMapping;
-(NSArray *)recipientDisplayNames;
@end

