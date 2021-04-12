/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)appleID;
-(NSPersonNameComponents *)nameComponents;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(BOOL)isMe;
-(void)setIsMe:(BOOL)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
@end

