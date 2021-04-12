/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAsset, NSData, CKDPDate, NSMutableArray, CKDPLocationCoordinate, CKDPPackage, CKDPRecordReference, CKDPStreamingAsset, NSString;

@interface CKDPRecordFieldValue : PBCodable <NSCopying> {

	double _doubleValue;
	long long _signedValue;
	CKDPAsset* _assetValue;
	NSData* _bytesValue;
	CKDPDate* _dateValue;
	NSMutableArray* _listValues;
	CKDPLocationCoordinate* _locationValue;
	CKDPPackage* _packageValue;
	CKDPRecordReference* _referenceValue;
	CKDPStreamingAsset* _streamingAssetValue;
	NSString* _stringValue;
	int _type;
	BOOL _isEncrypted;
	SCD_Struct_CK11 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                                   //@synthesize bytesValue=_bytesValue - In the implementation block
@property (assign,nonatomic) BOOL hasSignedValue; 
@property (assign,nonatomic) long long signedValue;                                 //@synthesize signedValue=_signedValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                                    //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) BOOL hasDateValue; 
@property (nonatomic,retain) CKDPDate * dateValue;                                  //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                                //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationValue; 
@property (nonatomic,retain) CKDPLocationCoordinate * locationValue;                //@synthesize locationValue=_locationValue - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceValue; 
@property (nonatomic,retain) CKDPRecordReference * referenceValue;                  //@synthesize referenceValue=_referenceValue - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetValue; 
@property (nonatomic,retain) CKDPAsset * assetValue;                                //@synthesize assetValue=_assetValue - In the implementation block
@property (nonatomic,retain) NSMutableArray * listValues;                           //@synthesize listValues=_listValues - In the implementation block
@property (nonatomic,readonly) BOOL hasPackageValue; 
@property (nonatomic,retain) CKDPPackage * packageValue;                            //@synthesize packageValue=_packageValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStreamingAssetValue; 
@property (nonatomic,retain) CKDPStreamingAsset * streamingAssetValue;              //@synthesize streamingAssetValue=_streamingAssetValue - In the implementation block
@property (assign,nonatomic) BOOL hasIsEncrypted; 
@property (assign,nonatomic) BOOL isEncrypted;                                      //@synthesize isEncrypted=_isEncrypted - In the implementation block
+(Class)listValueType;
-(NSData *)bytesValue;
-(id)dictionaryRepresentation;
-(CKDPDate *)dateValue;
-(double)doubleValue;
-(NSMutableArray *)listValues;
-(BOOL)hasBytesValue;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setBytesValue:(NSData *)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(unsigned long long)listValuesCount;
-(void)setReferenceValue:(CKDPRecordReference *)arg1 ;
-(BOOL)hasType;
-(BOOL)hasLocationValue;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(NSString *)stringValue;
-(void)setSignedValue:(long long)arg1 ;
-(void)setIsEncrypted:(BOOL)arg1 ;
-(CKDPRecordReference *)referenceValue;
-(BOOL)hasDoubleValue;
-(void)addListValue:(id)arg1 ;
-(id)listValueAtIndex:(unsigned long long)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(void)setListValues:(NSMutableArray *)arg1 ;
-(BOOL)isEncrypted;
-(BOOL)hasSignedValue;
-(int)type;
-(void)setDateValue:(CKDPDate *)arg1 ;
-(unsigned long long)hash;
-(CKDPLocationCoordinate *)locationValue;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(void)setHasSignedValue:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)signedValue;
-(void)clearListValues;
-(void)setLocationValue:(CKDPLocationCoordinate *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasReferenceValue;
-(BOOL)hasDateValue;
-(void)setAssetValue:(CKDPAsset *)arg1 ;
-(void)setPackageValue:(CKDPPackage *)arg1 ;
-(void)setStreamingAssetValue:(CKDPStreamingAsset *)arg1 ;
-(CKDPAsset *)assetValue;
-(CKDPPackage *)packageValue;
-(CKDPStreamingAsset *)streamingAssetValue;
-(BOOL)hasAssetValue;
-(BOOL)hasPackageValue;
-(BOOL)hasStreamingAssetValue;
-(void)setHasIsEncrypted:(BOOL)arg1 ;
-(BOOL)hasIsEncrypted;
@end

