/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long imageType; 
@property (nonatomic,copy,readonly) NSString * imageIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)imageType;
-(VUIImageInfoManagedObject *)imageInfo;
-(NSString *)imageIdentifier;
-(void)setImageInfo:(VUIImageInfoManagedObject *)arg1 ;
-(NSString *)imageIdentifierInternal;
-(id)initWithVideoManagedObject:(id)arg1 imageType:(unsigned long long)arg2 ;
-(unsigned long long)imageTypeInternal;
-(void)setImageTypeInternal:(unsigned long long)arg1 ;
-(void)setImageIdentifierInternal:(NSString *)arg1 ;
@end

