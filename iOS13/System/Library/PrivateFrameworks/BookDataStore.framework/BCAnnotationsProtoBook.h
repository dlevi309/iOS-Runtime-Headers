/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BookDataStore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface BCAnnotationsProtoBook : PBCodable <NSCopying> {

	NSMutableArray* _annotations;
	NSString* _appVersion;
	NSString* _assetID;
	NSString* _assetVersion;

}

@property (nonatomic,retain) NSString * assetID;                        //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,retain) NSString * appVersion;                     //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetVersion; 
@property (nonatomic,retain) NSString * assetVersion;                   //@synthesize assetVersion=_assetVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * annotations;              //@synthesize annotations=_annotations - In the implementation block
+(Class)annotationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)assetVersion;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(NSString *)assetID;
-(void)setAssetID:(NSString *)arg1 ;
-(NSMutableArray *)annotations;
-(void)addAnnotation:(id)arg1 ;
-(void)clearAnnotations;
-(void)setAnnotations:(NSMutableArray *)arg1 ;
-(void)setAssetVersion:(NSString *)arg1 ;
-(BOOL)hasAssetVersion;
-(unsigned long long)annotationsCount;
-(id)annotationAtIndex:(unsigned long long)arg1 ;
@end

