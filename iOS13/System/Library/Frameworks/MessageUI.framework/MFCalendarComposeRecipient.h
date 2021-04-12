/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSString;

@interface MFCalendarComposeRecipient : MFComposeRecipient {

	NSString* _calAttendeeName;
	id _participant;

}

@property (nonatomic,retain) id participant; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)displayString;
-(id)participant;
-(void)setParticipant:(id)arg1 ;
-(id)initWithComposeRecipient:(id)arg1 ;
-(void)setCalAttendeeName:(id)arg1 ;
@end

