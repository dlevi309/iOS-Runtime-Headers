/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSString;

@interface TIRevisionHistoryToken : NSObject {

	BOOL _accepted;
	unsigned _usageLearningMask;
	unsigned _usageTrackingMask;
	NSString* _tokenInputString;
	unsigned long long _offset;
	TITokenID _tokenID;
	NSString* _tokenDictionaryString;
	NSString* _userTyping;

}

@property (nonatomic,copy) NSString * tokenInputString;                    //@synthesize tokenInputString=_tokenInputString - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                    //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) TITokenID tokenID;                            //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,copy) NSString * tokenDictionaryString;               //@synthesize tokenDictionaryString=_tokenDictionaryString - In the implementation block
@property (nonatomic,copy) NSString * userTyping;                          //@synthesize userTyping=_userTyping - In the implementation block
@property (assign,nonatomic) unsigned usageLearningMask;                   //@synthesize usageLearningMask=_usageLearningMask - In the implementation block
@property (assign,nonatomic) unsigned usageTrackingMask;                   //@synthesize usageTrackingMask=_usageTrackingMask - In the implementation block
@property (assign,getter=isAccepted,nonatomic) BOOL accepted;              //@synthesize accepted=_accepted - In the implementation block
-(id)description;
-(TITokenID)tokenID;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(unsigned)usageTrackingMask;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
-(void)setAccepted:(BOOL)arg1 ;
-(void)setTokenID:(TITokenID)arg1 ;
-(BOOL)isAccepted;
-(NSString *)tokenDictionaryString;
-(NSString *)tokenInputString;
-(void)setTokenInputString:(NSString *)arg1 ;
-(void)setTokenDictionaryString:(NSString *)arg1 ;
-(NSString *)userTyping;
-(void)setUserTyping:(NSString *)arg1 ;
-(unsigned)usageLearningMask;
-(void)setUsageLearningMask:(unsigned)arg1 ;
@end

