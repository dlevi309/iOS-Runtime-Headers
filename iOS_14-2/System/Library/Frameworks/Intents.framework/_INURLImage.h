/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INImage.h>

@class NSData, NSURL;

@interface _INURLImage : INImage {

	NSData* _sandboxExtensionData;
	NSURL* _imageURL;

}

@property (nonatomic,copy,readonly) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_uri;
-(id)initWithImageURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_dictionaryRepresentation;
-(void)_setUri:(id)arg1 ;
-(BOOL)_requiresRetrieval;
-(id)_copyWithSubclass:(Class)arg1 ;
-(BOOL)_isEligibleForProxying;
-(id)_identifier;
-(id)_initWithURLRepresentation:(id)arg1 ;
-(id)_sandboxExtensionData;
-(void)_setSandboxExtensionData:(id)arg1 ;
-(id)_URLRepresentation;
-(BOOL)_isSupportedForDonation;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)imageURL;
@end

