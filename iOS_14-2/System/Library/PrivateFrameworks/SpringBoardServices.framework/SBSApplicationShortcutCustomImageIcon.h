/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSData;

@interface SBSApplicationShortcutCustomImageIcon : SBSApplicationShortcutIcon {

	BOOL _isTemplate;
	NSData* _imageData;
	long long _dataType;

}

@property (nonatomic,readonly) NSData * imageData;                 //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) long long dataType;                 //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) BOOL isTemplate;                    //@synthesize isTemplate=_isTemplate - In the implementation block
@property (nonatomic,readonly) NSData * imagePNGData; 
-(long long)dataType;
-(BOOL)isTemplate;
-(id)initWithImageData:(id)arg1 dataType:(long long)arg2 isTemplate:(BOOL)arg3 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSData *)imageData;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_initForSubclass;
-(NSData *)imagePNGData;
-(id)initWithImageData:(id)arg1 dataType:(long long)arg2 ;
-(id)initWithImagePNGData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

