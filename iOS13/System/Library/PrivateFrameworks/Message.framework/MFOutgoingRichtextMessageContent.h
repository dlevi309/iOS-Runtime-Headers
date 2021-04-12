/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copy;
-(id)richtextContent;
-(void)setPlaintextAlternative:(MFPlainTextDocument *)arg1 ;
-(void)setMixedContent:(NSArray *)arg1 ;
-(BOOL)textPartsAreHTML;
-(void)setTextPartsAreHTML:(BOOL)arg1 ;
-(MFPlainTextDocument *)plaintextAlternative;
-(NSArray *)mixedContent;
@end

