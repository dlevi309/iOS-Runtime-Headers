/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData;

@interface SISchemaMultiUserState : PBCodable {

	NSArray* _enrolledUsers;

}

@property (nonatomic,copy) NSArray * enrolledUsers;              //@synthesize enrolledUsers=_enrolledUsers - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)addEnrolledUsers:(id)arg1 ;
-(NSArray *)enrolledUsers;
-(void)clearEnrolledUsers;
-(unsigned long long)enrolledUsersCount;
-(id)enrolledUsersAtIndex:(unsigned long long)arg1 ;
-(void)setEnrolledUsers:(NSArray *)arg1 ;
@end

