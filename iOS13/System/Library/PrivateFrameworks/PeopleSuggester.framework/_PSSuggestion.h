/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, INImage;

@interface _PSSuggestion : NSObject <NSSecureCoding> {

	NSString* _conversationIdentifier;
	NSString* _groupName;
	NSArray* _recipients;
	NSString* _bundleID;
	INImage* _image;
	NSString* _derivedIntentIdentifier;
	NSString* _reason;
	NSString* _reasonType;
	NSString* _trialID;

}

@property (nonatomic,copy,readonly) NSString * derivedIntentIdentifier;              //@synthesize derivedIntentIdentifier=_derivedIntentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * reason;                                        //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * reasonType;                                    //@synthesize reasonType=_reasonType - In the implementation block
@property (nonatomic,copy) NSString * trialID;                                       //@synthesize trialID=_trialID - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationIdentifier;               //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupName;                            //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                                     //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) INImage * image;                                      //@synthesize image=_image - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)suggestionForBundleID:(id)arg1 derivedIntentIdentifier:(id)arg2 knowledgeStore:(id)arg3 contactResolver:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(NSString *)bundleID;
-(INImage *)image;
-(NSString *)derivedIntentIdentifier;
-(NSString *)groupName;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)conversationIdentifier;
-(void)setReason:(NSString *)arg1 ;
-(void)setReasonType:(NSString *)arg1 ;
-(NSString *)reasonType;
-(void)setTrialID:(NSString *)arg1 ;
-(NSString *)trialID;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 ;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 ;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8 ;
@end

