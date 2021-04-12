/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray, TUCall;

@interface RTTConversation : NSObject <NSSecureCoding> {

	NSString* _callIdentifier;
	NSMutableArray* _utterances;
	TUCall* _call;

}

@property (nonatomic,retain) NSString * callIdentifier;                //@synthesize callIdentifier=_callIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * utterances;              //@synthesize utterances=_utterances - In the implementation block
@property (nonatomic,retain) TUCall * call;                            //@synthesize call=_call - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)conversationWithCall:(id)arg1 ;
+(void)conversationWithCallUID:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(void)conversationWithCall:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(id)conversationWithID:(id)arg1 andUtterances:(id)arg2 ;
-(TUCall *)call;
-(NSMutableArray *)utterances;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)cleanup;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToConversation:(id)arg1 ;
-(void)setCall:(TUCall *)arg1 ;
-(void)setUtterances:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)appendCharacter:(unsigned short)arg1 ;
-(NSString *)callIdentifier;
-(void)addUtterance:(id)arg1 ;
-(id)appendStringFromOtherContactPath:(id)arg1 ;
-(id)otherContactPath;
-(id)lastUtteranceForMe:(BOOL)arg1 ;
-(void)setCallIdentifier:(NSString *)arg1 ;
-(id)processBackspaceForMe:(BOOL)arg1 ;
-(id)mergeUtterancesIfPossible;
-(unsigned long long)utteranceCountForMe:(BOOL)arg1 ;
@end

