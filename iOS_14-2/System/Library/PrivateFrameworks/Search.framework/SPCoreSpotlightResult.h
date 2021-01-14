/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <Search/Search-Structs.h>
#import <Search/SFSearchResult_Compatibility.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSArray;

@interface SPCoreSpotlightResult : SFSearchResult_Compatibility <NSCopying> {

	BOOL _completed;
	BOOL _hasAssociatedUserActivity;
	NSString* _relatedUniqueIdentifier;
	NSString* _itemIdentifier;
	NSDate* _interestingDate;
	NSString* _domainIdentifier;
	long long* _incomingCount;
	long long* _outgoingCount;
	NSString* _relatedBundleID;
	NSString* _mailConversationIdentifier;
	NSString* _stringForDedupe;
	NSArray* _launchDates;
	NSDate* _contentCreationDate;
	NSString* _bundleID;
	T _buddyScore;

}

@property (retain) NSString * relatedUniqueIdentifier;                    //@synthesize relatedUniqueIdentifier=_relatedUniqueIdentifier - In the implementation block
@property (assign) T buddyScore;                                          //@synthesize buddyScore=_buddyScore - In the implementation block
@property (retain) NSString * itemIdentifier;                             //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (retain) NSDate * interestingDate;                              //@synthesize interestingDate=_interestingDate - In the implementation block
@property (assign) BOOL completed;                                        //@synthesize completed=_completed - In the implementation block
@property (retain) NSString * domainIdentifier;                           //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (assign) long long* incomingCount;                              //@synthesize incomingCount=_incomingCount - In the implementation block
@property (assign) long long* outgoingCount;                              //@synthesize outgoingCount=_outgoingCount - In the implementation block
@property (retain) NSArray * compatibilityDescriptions; 
@property (retain) NSString * relatedBundleID;                            //@synthesize relatedBundleID=_relatedBundleID - In the implementation block
@property (retain) NSString * mailConversationIdentifier;                 //@synthesize mailConversationIdentifier=_mailConversationIdentifier - In the implementation block
@property (retain) NSString * stringForDedupe;                            //@synthesize stringForDedupe=_stringForDedupe - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedUserActivity;              //@synthesize hasAssociatedUserActivity=_hasAssociatedUserActivity - In the implementation block
@property (nonatomic,retain) NSArray * launchDates;                       //@synthesize launchDates=_launchDates - In the implementation block
@property (nonatomic,retain) NSDate * contentCreationDate;                //@synthesize contentCreationDate=_contentCreationDate - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (assign) int title_maxlines; 
-(NSString *)itemIdentifier;
-(NSString *)domainIdentifier;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(BOOL)hasDetail;
-(BOOL)completed;
-(id)debugDescription;
-(NSString *)relatedUniqueIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(Class)classForCoder;
-(NSDate *)interestingDate;
-(void)setCompatibilityDescriptions:(NSArray *)arg1 ;
-(NSArray *)compatibilityDescriptions;
-(void)setTitle_maxlines:(int)arg1 ;
-(int)title_maxlines;
-(T)buddyScore;
-(void)setBuddyScore:(T)arg1 ;
-(void)setInterestingDate:(NSDate *)arg1 ;
-(long long*)incomingCount;
-(void)setIncomingCount:(long long*)arg1 ;
-(long long*)outgoingCount;
-(void)setOutgoingCount:(long long*)arg1 ;
-(NSString *)relatedBundleID;
-(void)setRelatedBundleID:(NSString *)arg1 ;
-(NSString *)mailConversationIdentifier;
-(void)setMailConversationIdentifier:(NSString *)arg1 ;
-(NSString *)stringForDedupe;
-(void)setStringForDedupe:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(BOOL)hasAssociatedUserActivity;
-(void)setHasAssociatedUserActivity:(BOOL)arg1 ;
-(NSArray *)launchDates;
-(void)setLaunchDates:(NSArray *)arg1 ;
-(void)setRelatedUniqueIdentifier:(NSString *)arg1 ;
-(NSDate *)contentCreationDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentCreationDate:(NSDate *)arg1 ;
@end

