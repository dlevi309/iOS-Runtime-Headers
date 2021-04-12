/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


@protocol CHPhoneBookManagerProtocol <NSObject>
@required
+(id)get;
-(id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(BOOL)arg3;
-(id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(BOOL)arg2;
-(id)getPersonsNameForContact:(id)arg1;
-(id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(BOOL)arg3;
-(BOOL)isABContactASuggestion;

@end

