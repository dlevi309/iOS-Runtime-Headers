/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)size;
-(CKDPRecordIdentifier *)recordID;
-(id)CKPropertiesDescription;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(id)initWithRecordID:(id)arg1 fileSignature:(id)arg2 referenceSignature:(id)arg3 size:(id)arg4 ;
@end

