/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <NSCopying> {

	NSMutableArray* _xattrs;

}

@property (nonatomic,retain) NSMutableArray * xattrs;              //@synthesize xattrs=_xattrs - In the implementation block
+(id)loadXattrsFromFD:(int)arg1 withMaximumSize:(unsigned long long)arg2 error:(id*)arg3 ;
+(BOOL)loadXattrsFromFD:(int)arg1 structuralBlob:(id*)arg2 contentBlob:(id*)arg3 localBlob:(id*)arg4 withMaximumSize:(unsigned long long)arg5 error:(id*)arg6 ;
+(BOOL)removeXattrsOnFD:(int)arg1 includingContentRelated:(BOOL)arg2 error:(id*)arg3 ;
+(Class)xattrsType;
-(id)dictionaryRepresentation;
-(id)shortDescription;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)xattrs;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)applyToFileDescriptor:(int)arg1 error:(id*)arg2 ;
-(void)setXattrs:(NSMutableArray *)arg1 ;
-(void)addXattrs:(id)arg1 ;
-(unsigned long long)xattrsCount;
-(void)clearXattrs;
-(id)xattrsAtIndex:(unsigned long long)arg1 ;
@end

