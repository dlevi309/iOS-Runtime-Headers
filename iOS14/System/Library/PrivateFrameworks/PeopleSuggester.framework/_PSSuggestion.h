/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, INImage, NSNumber, NSDictionary;

@interface _PSSuggestion : NSObject <NSSecureCoding> {

	BOOL _familySuggestion;
	BOOL _isAdaptedModelCreated;
	BOOL _isAdaptedModelUsed;
	NSString* _conversationIdentifier;
	NSString* _groupName;
	NSArray* _recipients;
	NSString* _bundleID;
	INImage* _image;
	NSString* _derivedIntentIdentifier;
	NSNumber* _score;
	NSString* _adaptedModelRecipeID;
	NSString* _supportedBundleIDs;
	NSString* _utiList;
	NSDictionary* _modelSuggestionProxies;
	NSString* _reason;
	NSString* _reasonType;
	NSString* _trialID;

}

@property (nonatomic,copy,readonly) NSString * derivedIntentIdentifier;              //@synthesize derivedIntentIdentifier=_derivedIntentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * score;                                //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) BOOL familySuggestion;                                //@synthesize familySuggestion=_familySuggestion - In the implementation block
@property (assign,nonatomic) BOOL isAdaptedModelCreated;                             //@synthesize isAdaptedModelCreated=_isAdaptedModelCreated - In the implementation block
@property (assign,nonatomic) BOOL isAdaptedModelUsed;                                //@synthesize isAdaptedModelUsed=_isAdaptedModelUsed - In the implementation block
@property (nonatomic,retain) NSString * adaptedModelRecipeID;                        //@synthesize adaptedModelRecipeID=_adaptedModelRecipeID - In the implementation block
@property (nonatomic,retain) NSString * supportedBundleIDs;                          //@synthesize supportedBundleIDs=_supportedBundleIDs - In the implementation block
@property (nonatomic,retain) NSString * utiList;                                     //@synthesize utiList=_utiList - In the implementation block
@property (nonatomic,retain) NSDictionary * modelSuggestionProxies;                  //@synthesize modelSuggestionProxies=_modelSuggestionProxies - In the implementation block
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
-(NSArray *)recipients;
-(NSString *)derivedIntentIdentifier;
-(void)setReasonType:(NSString *)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)reasonType;
-(void)setSupportedBundleIDs:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSNumber *)score;
-(NSString *)supportedBundleIDs;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8 score:(id)arg9 ;
-(void)setAdaptedModelRecipeID:(NSString *)arg1 ;
-(void)setModelSuggestionProxies:(NSDictionary *)arg1 ;
-(NSString *)trialID;
-(NSString *)conversationIdentifier;
-(INImage *)image;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 ;
-(NSString *)utiList;
-(BOOL)familySuggestion;
-(void)setIsAdaptedModelCreated:(BOOL)arg1 ;
-(void)setTrialID:(NSString *)arg1 ;
-(id)description;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 ;
-(NSString *)reason;
-(NSString *)bundleID;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)adaptedModelRecipeID;
-(BOOL)isAdaptedModelCreated;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 score:(id)arg7 ;
-(void)setUtiList:(NSString *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8 score:(id)arg9 familySuggestion:(BOOL)arg10 ;
-(NSDictionary *)modelSuggestionProxies;
-(void)setIsAdaptedModelUsed:(BOOL)arg1 ;
-(BOOL)isAdaptedModelUsed;
@end

