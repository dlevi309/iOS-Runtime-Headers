/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordIdentifier, NSData, NSNumber;

@interface CKDAssetID : NSObject <NSCopying> {

	CKDPRecordIdentifier* _recordID;
	NSData* _fileSignature;
	NSData* _referenceSignature;
	NSNumber* _size;

}

@property (nonatomic,readonly) CKDPRecordIdentifier * recordID;              //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSData * fileSignature;                       //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,readonly) NSData * referenceSignature;                  //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,readonly) NSNumber * size;                              //@synthesize size=_size - In the implementation block
-(NSNumber *)size;
-(id)CKPropertiesDescription;
-(id)description;
-(unsigned long long)hash;
-(CKDPRecordIdentifier *)recordID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(id)initWithRecordID:(id)arg1 fileSignature:(id)arg2 referenceSignature:(id)arg3 size:(id)arg4 ;
@end

