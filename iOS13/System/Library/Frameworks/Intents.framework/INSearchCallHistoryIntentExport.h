/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INDateComponentsRange, INPerson, NSNumber;


@protocol INSearchCallHistoryIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy) INPerson * recipient; 
@property (assign,nonatomic) unsigned long long callCapabilities; 
@property (assign,nonatomic) unsigned long long callTypes; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (nonatomic,copy) NSNumber * unseen; 
@required
-(id)init;
-(void)setRecipient:(id)arg1;
-(INDateComponentsRange *)dateCreated;
-(void)setDateCreated:(id)arg1;
-(INPerson *)recipient;
-(long long)preferredCallProvider;
-(void)setPreferredCallProvider:(long long)arg1;
-(unsigned long long)callCapabilities;
-(unsigned long long)callTypes;
-(NSNumber *)unseen;
-(void)setUnseen:(id)arg1;
-(void)setCallCapabilities:(unsigned long long)arg1;
-(void)setCallTypes:(unsigned long long)arg1;

@end

