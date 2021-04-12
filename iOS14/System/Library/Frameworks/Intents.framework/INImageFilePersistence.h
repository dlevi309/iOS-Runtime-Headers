/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/INImageStoring.h>

@class INImageBundle, NSArray, NSString;

@interface INImageFilePersistence : NSObject <INImageStoring> {

	INImageBundle* _imageBundle;
	NSArray* __supportedClasses;

}

@property (setter=_setSupportedClasses:,nonatomic,copy) NSArray * _supportedClasses;              //@synthesize _supportedClasses=__supportedClasses - In the implementation block
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)purgeExpiredImagesInEphemeralStore;
-(id)init;
-(void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canStoreImage:(id)arg1 ;
-(void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)serviceIdentifier;
-(id)_filePathForImageWithFileName:(id)arg1 ;
-(id)_deleteItemAtFilePath:(id)arg1 ;
-(void)_setSupportedClasses:(id)arg1 ;
-(unsigned long long)servicePriority;
-(NSArray *)_supportedClasses;
@end

