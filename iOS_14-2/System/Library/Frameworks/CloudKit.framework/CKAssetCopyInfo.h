/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL, NSString;

@interface CKAssetCopyInfo : NSObject <NSSecureCoding> {

	NSData* _fileSignature;
	NSData* _referenceSignature;
	NSData* _assetKey;
	NSURL* _assetURL;
	NSString* _senderID;

}

@property (nonatomic,copy) NSData * fileSignature;                   //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,copy) NSData * referenceSignature;              //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,copy) NSData * assetKey;                        //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,copy) NSURL * assetURL;                         //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy) NSString * senderID;                      //@synthesize senderID=_senderID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSString *)senderID;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setAssetKey:(NSData *)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
-(NSURL *)assetURL;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSenderID:(NSString *)arg1 ;
-(id)description;
-(NSData *)assetKey;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(void)setFileSignature:(NSData *)arg1 ;
@end

