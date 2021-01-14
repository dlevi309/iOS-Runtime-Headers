/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSString, INPersonHandle, NSPersonNameComponents, INImage, NSArray;


@protocol INPersonExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,copy) INPersonHandle * personHandle; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) INImage * image; 
@property (nonatomic,copy) NSString * contactIdentifier; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * customIdentifier; 
@property (nonatomic,copy) NSArray * aliases; 
@property (assign,nonatomic) long long suggestionType; 
@property (assign,nonatomic) BOOL isMe; 
@property (nonatomic,copy) NSArray * alternatives; 
@required
-(NSArray *)aliases;
-(BOOL)isMe;
-(void)setHandle:(id)arg1;
-(INPersonHandle *)personHandle;
-(NSString *)contactIdentifier;
-(void)setImage:(id)arg1;
-(NSString *)handle;
-(id)init;
-(NSString *)relationship;
-(INImage *)image;
-(void)setRelationship:(id)arg1;
-(void)setAlternatives:(id)arg1;
-(void)setAliases:(id)arg1;
-(void)setIsMe:(BOOL)arg1;
-(void)setPersonHandle:(id)arg1;
-(void)setDisplayName:(id)arg1;
-(void)setSuggestionType:(long long)arg1;
-(NSString *)customIdentifier;
-(NSArray *)alternatives;
-(void)setContactIdentifier:(id)arg1;
-(void)setCustomIdentifier:(id)arg1;
-(void)setNameComponents:(id)arg1;
-(long long)suggestionType;
-(NSString *)displayName;
-(NSPersonNameComponents *)nameComponents;

@end

