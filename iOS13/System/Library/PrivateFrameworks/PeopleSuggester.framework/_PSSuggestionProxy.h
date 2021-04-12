/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class NSString;

@interface _PSSuggestionProxy : NSObject {

	BOOL _useGroupsWhenFindingRecipient;
	NSString* _bundleID;
	NSString* _interactionRecipients;
	NSString* _contactID;
	NSString* _handle;
	NSString* _reason;
	NSString* _reasonType;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * interactionRecipients;              //@synthesize interactionRecipients=_interactionRecipients - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactID;                          //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                             //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                             //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSString * reasonType;                         //@synthesize reasonType=_reasonType - In the implementation block
@property (nonatomic,readonly) BOOL useGroupsWhenFindingRecipient;                 //@synthesize useGroupsWhenFindingRecipient=_useGroupsWhenFindingRecipient - In the implementation block
@property (nonatomic,copy,readonly) NSString * suggestionKey; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)reason;
-(NSString *)handle;
-(NSString *)bundleID;
-(NSString *)contactID;
-(NSString *)reasonType;
-(NSString *)suggestionKey;
-(NSString *)interactionRecipients;
-(BOOL)useGroupsWhenFindingRecipient;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 ;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 reason:(id)arg4 reasonType:(id)arg5 ;
-(id)initWithBundleID:(id)arg1 interactionRecipients:(id)arg2 contactID:(id)arg3 handle:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 useGroupsWhenFindingRecipient:(BOOL)arg7 ;
@end

