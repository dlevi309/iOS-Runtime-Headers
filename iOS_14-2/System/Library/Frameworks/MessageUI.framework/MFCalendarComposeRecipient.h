/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSString;

@interface MFCalendarComposeRecipient : MFComposeRecipient {

	NSString* _calAttendeeName;
	id _participant;

}

@property (nonatomic,retain) id participant; 
-(id)displayString;
-(id)initWithComposeRecipient:(id)arg1 ;
-(void)setCalAttendeeName:(id)arg1 ;
-(unsigned long long)hash;
-(void)setParticipant:(id)arg1 ;
-(id)participant;
-(BOOL)isEqual:(id)arg1 ;
@end

