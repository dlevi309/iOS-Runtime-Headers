/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
*/


@protocol IDSAccountRegistrationDelegate <NSObject>
@optional
-(void)account:(id)arg1 loginChanged:(id)arg2;
-(void)account:(id)arg1 aliasesChanged:(id)arg2;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
-(void)account:(id)arg1 displayNameChanged:(id)arg2;
-(void)account:(id)arg1 profileChanged:(id)arg2;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
-(void)refreshRegistrationForAccount:(id)arg1;

@end

