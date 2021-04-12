/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INImage.h>

@class NSUUID, NSData;

@interface _INDataImage : INImage {

	NSUUID* _sha256HashUUID;
	NSData* _imageData;

}

@property (nonatomic,copy,readonly) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(BOOL)_requiresRetrieval;
-(id)_dictionaryRepresentation;
-(id)_imageData;
-(id)initWithImageData:(id)arg1 ;
-(NSData *)imageData;
-(void)_setImageData:(id)arg1 ;
-(id)_sha256HashUUID;
-(void)_retrieveImageDataWithReply:(/*^block*/id)arg1 ;
-(id)_copyWithSubclass:(Class)arg1 ;
-(BOOL)_isEligibleForProxying;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

