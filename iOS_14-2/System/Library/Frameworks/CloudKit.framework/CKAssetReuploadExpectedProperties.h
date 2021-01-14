/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface CKAssetReuploadExpectedProperties : NSObject <NSCopying, NSSecureCoding> {

	NSData* _fileSignature;
	NSData* _referenceSignature;
	NSData* _assetKey;

}

@property (nonatomic,copy) NSData * fileSignature;                   //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,copy) NSData * referenceSignature;              //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,copy) NSData * assetKey;                        //@synthesize assetKey=_assetKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setAssetKey:(NSData *)arg1 ;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)assetKey;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(void)setFileSignature:(NSData *)arg1 ;
@end

