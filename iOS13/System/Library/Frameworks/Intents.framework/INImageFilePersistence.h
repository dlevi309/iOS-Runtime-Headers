/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/INImageStoring.h>

@class INImageBundle, NSArray, NSString;

@interface INImageFilePersistence : NSObject <INImageStoring> {

	INImageBundle* _imageBundle;
	NSArray* __supportedClasses;

}

@property (setter=_setSupportedClasses:,nonatomic,copy) NSArray * _supportedClasses;              //@synthesize _supportedClasses=__supportedClasses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * serviceIdentifier; 
@property (nonatomic,readonly) unsigned long long servicePriority; 
-(id)init;
-(NSString *)serviceIdentifier;
-(BOOL)canStoreImage:(id)arg1 ;
-(void)storeImage:(id)arg1 scaled:(BOOL)arg2 qualityOfService:(unsigned)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)retrieveImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purgeImageWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)servicePriority;
-(void)purgeExpiredImagesInEphemeralStore;
-(id)_filePathForImageWithFileName:(id)arg1 ;
-(id)_deleteItemAtFilePath:(id)arg1 ;
-(NSArray *)_supportedClasses;
-(void)_setSupportedClasses:(id)arg1 ;
@end

