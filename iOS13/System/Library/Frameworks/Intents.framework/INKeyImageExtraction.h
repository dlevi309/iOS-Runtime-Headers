/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/INImageStoring.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, INImage, NSDictionary;

@interface INKeyImageExtraction : NSObject <INImageStoring, NSSecureCoding> {

	NSMutableDictionary* _keyImagesByType;
	long long _imageTypeToStore;
	NSString* _proxyIdentifier;

}

@property (assign,setter=_setImageTypeToStore:,nonatomic) long long _imageTypeToStore;              //@synthesize imageTypeToStore=_imageTypeToStore - In the implementation block
@property (nonatomic,copy) INImage * keyImage; 
@property (nonatomic,copy) NSString * proxyIdentifier;                                              //@synthesize proxyIdentifier=_proxyIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * keyImagesByType;                                          //@synthesize keyImagesByType=_keyImagesByType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INImage *)keyImage;
-(NSString *)proxyIdentifier;
-(void)setKeyImage:(INImage *)arg1 ;
-(void)setProxyIdentifier:(NSString *)arg1 ;
-(NSString *)serviceIdentifier;
-(long long)_imageTypeToStore;
-(id)storeImageSynchronously:(id)arg1 error:(id*)arg2 ;
-(id)retrieveImageSynchronouslyForIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)canStoreImage:(id)arg1 ;
-(void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)servicePriority;
-(NSDictionary *)keyImagesByType;
-(void)_setImageTypeToStore:(long long)arg1 ;
-(void)setKeyImagesByType:(NSDictionary *)arg1 ;
@end

