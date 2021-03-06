/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)annotations;
-(void)setAnnotations:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)assetVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(NSString *)appVersion;
-(NSString *)assetID;
-(void)mergeFrom:(id)arg1 ;
-(void)setAssetVersion:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAssetID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearAnnotations;
-(BOOL)hasAssetVersion;
-(unsigned long long)annotationsCount;
-(id)annotationAtIndex:(unsigned long long)arg1 ;
@end

