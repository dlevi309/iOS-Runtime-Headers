/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <libobjc.A.dylib/VUIImageLoadParams.h>

@class NSString, VUIImageInfoManagedObject;

@interface VUISidebandMediaEntityImageLoadParams : NSObject <VUIImageLoadParams> {

	VUIImageInfoManagedObject* _imageInfo;
	unsigned long long _imageTypeInternal;
	NSString* _imageIdentifierInternal;

}

@property (assign,nonatomic) unsigned long long imageTypeInternal;               //@synthesize imageTypeInternal=_imageTypeInternal - In the implementation block
@property (nonatomic,retain) NSString * imageIdentifierInternal;                 //@synthesize imageIdentifierInternal=_imageIdentifierInternal - In the implementation block
@property (nonatomic,retain) VUIImageInfoManagedObject * imageInfo;              //@synthesize imageInfo=_imageInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long imageType; 
@property (nonatomic,copy,readonly) NSString * imageIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VUIImageInfoManagedObject *)imageInfo;
-(void)setImageInfo:(VUIImageInfoManagedObject *)arg1 ;
-(NSString *)imageIdentifier;
-(unsigned long long)hash;
-(unsigned long long)imageType;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)imageIdentifierInternal;
-(id)initWithVideoManagedObject:(id)arg1 imageType:(unsigned long long)arg2 ;
-(unsigned long long)imageTypeInternal;
-(void)setImageTypeInternal:(unsigned long long)arg1 ;
-(void)setImageIdentifierInternal:(NSString *)arg1 ;
@end

