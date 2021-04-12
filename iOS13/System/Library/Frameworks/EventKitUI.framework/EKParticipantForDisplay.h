/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class NSMutableAttributedString;

@interface EKParticipantForDisplay : NSObject {

	BOOL _optionalParticipant;
	NSMutableAttributedString* _displayString;

}

@property (nonatomic,retain) NSMutableAttributedString * displayString;                          //@synthesize displayString=_displayString - In the implementation block
@property (assign,getter=isOptionalParticipant,nonatomic) BOOL optionalParticipant;              //@synthesize optionalParticipant=_optionalParticipant - In the implementation block
-(NSMutableAttributedString *)displayString;
-(void)setDisplayString:(NSMutableAttributedString *)arg1 ;
-(BOOL)isOptionalParticipant;
-(void)setOptionalParticipant:(BOOL)arg1 ;
@end

