/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLServerFeedbackMessage : PBCodable <NSCopying> {

	NSMutableArray* _keysAndValues;

}

@property (nonatomic,retain) NSMutableArray * keysAndValues;              //@synthesize keysAndValues=_keysAndValues - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearKeysAndValues;
-(void)addKeysAndValues:(id)arg1 ;
-(unsigned long long)keysAndValuesCount;
-(id)keysAndValuesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)keysAndValues;
-(void)setKeysAndValues:(NSMutableArray *)arg1 ;
@end

