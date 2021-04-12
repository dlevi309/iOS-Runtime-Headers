/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)libraryName;
-(long long)libraryId;
-(BOOL)hasLibraryName;
-(void)setLibraryName:(NSString *)arg1 ;
-(void)setLibraryId:(long long)arg1 ;
-(void)setHasLibraryId:(BOOL)arg1 ;
-(BOOL)hasLibraryId;
@end

