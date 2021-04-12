/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_CK17 _has;

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
-(double)doubleValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)stringValue;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasStringValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(void)setDateValue:(CKDPDate *)arg1 ;
-(BOOL)hasDateValue;
-(CKDPDate *)dateValue;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)isEncrypted;
-(void)setLocationValue:(CKDPLocationCoordinate *)arg1 ;
-(void)setReferenceValue:(CKDPRecordReference *)arg1 ;
-(void)setSignedValue:(long long)arg1 ;
-(void)setHasSignedValue:(BOOL)arg1 ;
-(BOOL)hasSignedValue;
-(BOOL)hasLocationValue;
-(BOOL)hasReferenceValue;
-(long long)signedValue;
-(CKDPLocationCoordinate *)locationValue;
-(CKDPRecordReference *)referenceValue;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setIsEncrypted:(BOOL)arg1 ;
-(void)setBytesValue:(NSData *)arg1 ;
-(void)addListValue:(id)arg1 ;
-(void)setListValues:(NSMutableArray *)arg1 ;
-(unsigned long long)listValuesCount;
-(void)clearListValues;
-(BOOL)hasBytesValue;
-(NSData *)bytesValue;
-(NSMutableArray *)listValues;
-(id)listValueAtIndex:(unsigned long long)arg1 ;
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
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
@end

