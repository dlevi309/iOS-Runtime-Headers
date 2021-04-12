/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)contacts;
-(void)setContacts:(NSMutableArray *)arg1 ;
-(void)clearContacts;
-(unsigned long long)contactsCount;
-(void)addContacts:(id)arg1 ;
-(id)contactsAtIndex:(unsigned long long)arg1 ;
@end

