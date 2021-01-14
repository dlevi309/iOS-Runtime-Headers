/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSData;

@interface SISchemaMultiUserState : PBCodable {

	NSArray* _enrolledUsers;

}

@property (nonatomic,copy) NSArray * enrolledUsers;              //@synthesize enrolledUsers=_enrolledUsers - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addEnrolledUsers:(id)arg1 ;
-(NSArray *)enrolledUsers;
-(void)clearEnrolledUsers;
-(unsigned long long)enrolledUsersCount;
-(id)enrolledUsersAtIndex:(unsigned long long)arg1 ;
-(void)setEnrolledUsers:(NSArray *)arg1 ;
@end

