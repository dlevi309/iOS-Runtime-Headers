/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNGroup.h>

@class NSString, NSData, NSDate, CNGroup;

@interface CNMutableGroup : CNGroup

@property (nonatomic,copy) NSString * externalURI; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSData * externalRepresentation; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * externalUUID; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) CNGroup * snapshot; 
@property (nonatomic,copy) NSString * name; 
-(id)freeze;
-(NSDate *)modificationDate;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setSnapshot:(CNGroup *)arg1 ;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(NSString *)externalIdentifier;
-(NSString *)name;
-(NSDate *)creationDate;
-(id)copy;
-(void)setExternalURI:(NSString *)arg1 ;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(NSString *)externalUUID;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setExternalUUID:(NSString *)arg1 ;
-(NSData *)externalRepresentation;
-(id)freezeWithSelfAsSnapshot;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(int)iOSLegacyIdentifier;
-(void)adoptValuesFromAndSetSnapshot:(id)arg1 ;
@end

