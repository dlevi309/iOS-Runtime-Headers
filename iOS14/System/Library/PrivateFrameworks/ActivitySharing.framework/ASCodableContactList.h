/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ASCodableContactList : PBCodable <NSCopying> {

	NSMutableArray* _contacts;

}

@property (nonatomic,retain) NSMutableArray * contacts;              //@synthesize contacts=_contacts - In the implementation block
+(Class)contactsType;
-(id)dictionaryRepresentation;
-(void)setContacts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contacts;
-(void)addContacts:(id)arg1 ;
-(id)contactsAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearContacts;
-(unsigned long long)contactsCount;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

