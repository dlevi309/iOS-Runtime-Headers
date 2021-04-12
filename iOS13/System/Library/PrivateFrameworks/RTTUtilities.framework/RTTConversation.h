/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)cleanup;
-(void)setCall:(TUCall *)arg1 ;
-(TUCall *)call;
-(BOOL)isEqualToConversation:(id)arg1 ;
-(NSMutableArray *)utterances;
-(void)setUtterances:(NSMutableArray *)arg1 ;
-(id)appendCharacter:(unsigned short)arg1 ;
-(NSString *)callIdentifier;
-(void)addUtterance:(id)arg1 ;
-(id)appendStringFromOtherContactPath:(id)arg1 ;
-(id)lastUtteranceForMe:(BOOL)arg1 ;
-(id)otherContactPath;
-(void)setCallIdentifier:(NSString *)arg1 ;
-(id)processBackspaceForMe:(BOOL)arg1 ;
-(id)mergeUtterancesIfPossible;
-(unsigned long long)utteranceCountForMe:(BOOL)arg1 ;
@end

