/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRecipient:(id)arg1;
-(NSNumber *)unseen;
-(id)init;
-(unsigned long long)callCapabilities;
-(INDateComponentsRange *)dateCreated;
-(void)setCallTypes:(unsigned long long)arg1;
-(void)setCallCapabilities:(unsigned long long)arg1;
-(void)setDateCreated:(id)arg1;
-(long long)preferredCallProvider;
-(INPerson *)recipient;
-(void)setPreferredCallProvider:(long long)arg1;
-(unsigned long long)callTypes;
-(void)setUnseen:(id)arg1;

@end

