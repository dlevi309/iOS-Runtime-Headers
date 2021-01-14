/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_dictionaryRepresentation;
-(id)_imageData;
-(BOOL)_requiresRetrieval;
-(id)_sha256HashUUID;
-(id)initWithImageData:(id)arg1 ;
-(void)_retrieveImageDataWithReply:(/*^block*/id)arg1 ;
-(id)_copyWithSubclass:(Class)arg1 ;
-(void)_setImageData:(id)arg1 ;
-(BOOL)_isEligibleForProxying;
-(id)_identifier;
-(NSData *)imageData;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

