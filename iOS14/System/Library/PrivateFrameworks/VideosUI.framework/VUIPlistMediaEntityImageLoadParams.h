/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIImageLoadParams.h>

@class NSString, NSURL;

@interface VUIPlistMediaEntityImageLoadParams : NSObject <VUIImageLoadParams> {

	NSString* _imageIdentifier;
	NSURL* _imageURL;
	NSString* _baseImageIdentifier;
	unsigned long long _imageType;

}

@property (nonatomic,copy) NSURL * imageURL;                                 //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString * baseImageIdentifier;                   //@synthesize baseImageIdentifier=_baseImageIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long imageType;                   //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * imageIdentifier;              //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageURL:(NSURL *)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)imageIdentifier;
-(unsigned long long)hash;
-(void)setImageType:(unsigned long long)arg1 ;
-(NSURL *)imageURL;
-(unsigned long long)imageType;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithImageURL:(id)arg1 baseImageIdentifier:(id)arg2 imageType:(unsigned long long)arg3 ;
-(NSString *)baseImageIdentifier;
-(void)setBaseImageIdentifier:(NSString *)arg1 ;
@end

