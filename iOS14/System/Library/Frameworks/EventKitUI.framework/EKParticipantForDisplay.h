/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

