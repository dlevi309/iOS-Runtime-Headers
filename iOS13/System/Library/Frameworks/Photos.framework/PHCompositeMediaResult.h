/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class NSMutableDictionary, NSDictionary;

@interface PHCompositeMediaResult : NSObject {

	NSMutableDictionary* _mutableInfo;
	NSDictionary* _imageProperties;

}
-(id)error;
-(BOOL)isCancelled;
-(void)setError:(id)arg1 ;
-(void)setSandboxExtensionToken:(id)arg1 ;
-(id)sandboxExtensionToken;
-(BOOL)isPlaceholder;
-(id)imageProperties;
-(id)info;
-(void)setCancelled:(BOOL)arg1 ;
-(CGImageRef)imageRef;
-(id)exifOrientation;
-(id)imageURL;
-(id)imageData;
-(id)initWithRequestID:(int)arg1 ;
-(id)mediaMetadata;
-(id)adjustmentData;
-(id)videoURL;
-(BOOL)containsValidData;
-(id)imageUTI;
-(long long)uiOrientation;
-(unsigned)cgOrientation;
-(id)videoAdjustmentData;
-(BOOL)canHandleAdjustmentData;
-(id)baseVersionNeeded;
-(id)imagePropertiesLoadIfNeeded:(BOOL)arg1 ;
-(void)setInfo:(id)arg1 forKey:(id)arg2 ;
-(void)addInfoFromDictionary:(id)arg1 ;
-(void)clearError;
-(void)setErrorIfNone:(id)arg1 ;
-(void)setIsInCloud:(BOOL)arg1 ;
-(BOOL)isInCloud;
-(void)setDegraded:(BOOL)arg1 ;
-(BOOL)isDegraded;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(id)imageSandboxExtensionToken;
-(id)videoSandboxExtensionToken;
@end

