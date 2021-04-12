/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INImage.h>

@class NSData, NSURL;

@interface _INURLImage : INImage {

	NSData* _sandboxExtensionData;
	NSURL* _imageURL;

}

@property (nonatomic,copy,readonly) NSURL * imageURL;                                                    //@synthesize imageURL=_imageURL - In the implementation block
@property (setter=_setSandboxExtensionData:,nonatomic,copy) NSData * _sandboxExtensionData;              //@synthesize sandboxExtensionData=_sandboxExtensionData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(BOOL)_requiresRetrieval;
-(id)_uri;
-(id)_dictionaryRepresentation;
-(id)initWithImageURL:(id)arg1 ;
-(NSURL *)imageURL;
-(id)_copyWithSubclass:(Class)arg1 ;
-(BOOL)_isEligibleForProxying;
-(void)_setUri:(id)arg1 ;
-(id)_initWithURLRepresentation:(id)arg1 ;
-(id)_URLRepresentation;
-(BOOL)_isSupportedForDonation;
-(NSData *)_sandboxExtensionData;
-(void)_setSandboxExtensionData:(id)arg1 ;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

