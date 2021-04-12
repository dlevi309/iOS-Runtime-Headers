/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class NSMutableDictionary, NSDictionary;

@interface PHCompositeMediaResult : NSObject {

	NSMutableDictionary* _mutableInfo;
	NSDictionary* _imageProperties;
	BOOL _isInCloud;
	BOOL _cancelled;

}

@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (nonatomic,readonly) BOOL isDegraded; 
@property (assign,nonatomic) BOOL isInCloud; 
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled; 
-(void)setCancelled:(BOOL)arg1 ;
-(id)info;
-(BOOL)isPlaceholder;
-(id)sandboxExtensionToken;
-(void)setSandboxExtensionToken:(id)arg1 ;
-(BOOL)isInCloud;
-(id)uniformTypeIdentifier;
-(id)sanitizedInfoDictionary;
-(void)setError:(id)arg1 ;
-(id)error;
-(id)errorInfoKey;
-(id)cancelledInfoKey;
-(id)inCloudInfoKey;
-(id)_sanitizedError;
-(unsigned)cgOrientation;
-(id)videoAdjustmentData;
-(id)adjustmentData;
-(BOOL)canHandleAdjustmentData;
-(id)baseVersionNeeded;
-(id)imagePropertiesLoadIfNeeded:(BOOL)arg1 ;
-(id)mediaMetadata;
-(void)setIsInCloud:(BOOL)arg1 ;
-(void)setInfo:(id)arg1 forKey:(id)arg2 ;
-(void)addInfoFromDictionary:(id)arg1 ;
-(void)clearError;
-(void)setErrorIfNone:(id)arg1 ;
-(id)imageSandboxExtensionToken;
-(id)videoSandboxExtensionToken;
-(id)exifOrientation;
-(BOOL)isDegraded;
-(id)imageData;
-(id)allowedInfoKeys;
-(CGImageRef)imageRef;
-(BOOL)containsValidData;
-(id)videoURL;
-(id)initWithRequestID:(int)arg1 ;
-(id)imageURL;
-(BOOL)isCancelled;
-(id)imageProperties;
-(long long)uiOrientation;
@end

