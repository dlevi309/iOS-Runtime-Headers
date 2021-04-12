/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOABDebugPanelExperimentBranch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _branchLabel;
	NSString* _branchName;
	NSString* _experimentId;
	NSString* _experimentName;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_branchLabel : 1;
		unsigned read_branchName : 1;
		unsigned read_experimentId : 1;
		unsigned read_experimentName : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_branchLabel : 1;
		unsigned wrote_branchName : 1;
		unsigned wrote_experimentId : 1;
		unsigned wrote_experimentName : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId; 
@property (nonatomic,readonly) BOOL hasExperimentName; 
@property (nonatomic,retain) NSString * experimentName; 
@property (nonatomic,readonly) BOOL hasBranchLabel; 
@property (nonatomic,retain) NSString * branchLabel; 
@property (nonatomic,readonly) BOOL hasBranchName; 
@property (nonatomic,retain) NSString * branchName; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasExperimentId;
-(NSString *)experimentId;
-(NSString *)experimentName;
-(NSString *)branchLabel;
-(NSString *)branchName;
-(void)_readExperimentId;
-(void)_readExperimentName;
-(void)_readBranchLabel;
-(void)_readBranchName;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)setExperimentName:(NSString *)arg1 ;
-(void)setBranchLabel:(NSString *)arg1 ;
-(void)setBranchName:(NSString *)arg1 ;
-(BOOL)hasExperimentName;
-(BOOL)hasBranchLabel;
-(BOOL)hasBranchName;
@end

