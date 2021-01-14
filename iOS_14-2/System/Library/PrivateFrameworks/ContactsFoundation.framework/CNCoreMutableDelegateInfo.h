/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <ContactsFoundation/CNCoreDelegateInfo.h>

@class NSNumber, NSString, NSPersonNameComponents;

@interface CNCoreMutableDelegateInfo : CNCoreDelegateInfo

@property (nonatomic,copy) NSNumber * dsid; 
@property (nonatomic,copy) NSString * altDSID; 
@property (nonatomic,copy) NSString * principalPath; 
@property (nonatomic,copy) NSString * appleID; 
@property (nonatomic,copy) NSPersonNameComponents * nameComponents; 
@property (assign,nonatomic) BOOL isMe; 
-(BOOL)isMe;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(void)setIsMe:(BOOL)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSPersonNameComponents *)nameComponents;
@end

