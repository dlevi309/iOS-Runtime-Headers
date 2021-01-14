/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSArray, NSDate, NSString;

@interface SGContactDetailSupervision : NSObject {

	BOOL _regexBelongsToSender;
	BOOL _regexDoesNotBelongToSender;
	BOOL _isFirstPerson;
	BOOL _isThirdPerson;
	BOOL _isUnlikelyPhone;
	NSArray* _matchingContacts;
	unsigned long long _ignoreAfter;
	NSDate* _matchDate;
	NSString* _senderDisplayName;

}

@property (assign,nonatomic) BOOL regexBelongsToSender;                        //@synthesize regexBelongsToSender=_regexBelongsToSender - In the implementation block
@property (assign,nonatomic) BOOL regexDoesNotBelongToSender;                  //@synthesize regexDoesNotBelongToSender=_regexDoesNotBelongToSender - In the implementation block
@property (assign,nonatomic) BOOL isFirstPerson;                               //@synthesize isFirstPerson=_isFirstPerson - In the implementation block
@property (assign,nonatomic) BOOL isThirdPerson;                               //@synthesize isThirdPerson=_isThirdPerson - In the implementation block
@property (nonatomic,readonly) NSArray * matchingContacts;                     //@synthesize matchingContacts=_matchingContacts - In the implementation block
@property (assign,nonatomic) BOOL isUnlikelyPhone;                             //@synthesize isUnlikelyPhone=_isUnlikelyPhone - In the implementation block
@property (assign,nonatomic) unsigned long long ignoreAfter;                   //@synthesize ignoreAfter=_ignoreAfter - In the implementation block
@property (assign,nonatomic,__weak) NSDate * matchDate;                        //@synthesize matchDate=_matchDate - In the implementation block
@property (assign,nonatomic,__weak) NSString * senderDisplayName;              //@synthesize senderDisplayName=_senderDisplayName - In the implementation block
-(void)setIsUnlikelyPhone:(BOOL)arg1 ;
-(BOOL)isUnlikelyPhone;
-(id)initWithMessage:(id)arg1 ddMatch:(id)arg2 isUnlikelyPhone:(BOOL)arg3 ;
-(SGMContactDetailOwner_)metricsContactDetailOwner;
-(SGMContactDetailFoundIn_)metricsContactDetailFoundIn;
-(BOOL)regexBelongsToSender;
-(void)setRegexBelongsToSender:(BOOL)arg1 ;
-(BOOL)regexDoesNotBelongToSender;
-(void)setRegexDoesNotBelongToSender:(BOOL)arg1 ;
-(BOOL)isFirstPerson;
-(void)setIsFirstPerson:(BOOL)arg1 ;
-(BOOL)isThirdPerson;
-(void)setIsThirdPerson:(BOOL)arg1 ;
-(NSArray *)matchingContacts;
-(unsigned long long)ignoreAfter;
-(void)setIgnoreAfter:(unsigned long long)arg1 ;
-(NSDate *)matchDate;
-(void)setMatchDate:(NSDate *)arg1 ;
-(NSString *)senderDisplayName;
-(void)setSenderDisplayName:(NSString *)arg1 ;
@end

