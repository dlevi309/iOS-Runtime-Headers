/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MIPLibraryIdentifier : PBCodable <NSCopying> {

	long long _libraryId;
	NSString* _libraryName;
	SCD_Struct_MI3 _has;

}

@property (nonatomic,readonly) BOOL hasLibraryName; 
@property (nonatomic,retain) NSString * libraryName;              //@synthesize libraryName=_libraryName - In the implementation block
@property (assign,nonatomic) BOOL hasLibraryId; 
@property (assign,nonatomic) long long libraryId;                 //@synthesize libraryId=_libraryId - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)libraryName;
-(BOOL)hasLibraryName;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(long long)libraryId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLibraryName:(NSString *)arg1 ;
-(void)setLibraryId:(long long)arg1 ;
-(void)setHasLibraryId:(BOOL)arg1 ;
-(BOOL)hasLibraryId;
@end

