/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNGroup.h>

@class NSString, NSData, NSDate, CNGroup;

@interface CNMutableGroup : CNGroup

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
-(NSString *)name;
-(id)copy;
-(id)freeze;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)modificationDate;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setSnapshot:(CNGroup *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(int)iOSLegacyIdentifier;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(NSString *)externalIdentifier;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSData *)externalRepresentation;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(NSString *)externalUUID;
-(void)setExternalUUID:(NSString *)arg1 ;
-(id)freezeWithSelfAsSnapshot;
-(void)adoptValuesFromAndSetSnapshot:(id)arg1 ;
@end

