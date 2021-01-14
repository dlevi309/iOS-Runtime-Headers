/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFOutgoingMessageContent.h>

@class MFPlainTextDocument, NSArray;

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent {

	BOOL _textPartsAreHTML;
	MFPlainTextDocument* _plaintextAlternative;
	NSArray* _mixedContent;

}

@property (assign,nonatomic) BOOL textPartsAreHTML;                                   //@synthesize textPartsAreHTML=_textPartsAreHTML - In the implementation block
@property (nonatomic,retain) MFPlainTextDocument * plaintextAlternative;              //@synthesize plaintextAlternative=_plaintextAlternative - In the implementation block
@property (nonatomic,retain) NSArray * mixedContent;                                  //@synthesize mixedContent=_mixedContent - In the implementation block
-(id)richtextContent;
-(void)setPlaintextAlternative:(MFPlainTextDocument *)arg1 ;
-(NSArray *)mixedContent;
-(void)setMixedContent:(NSArray *)arg1 ;
-(BOOL)textPartsAreHTML;
-(void)setTextPartsAreHTML:(BOOL)arg1 ;
-(MFPlainTextDocument *)plaintextAlternative;
-(id)copy;
@end

