/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)dataType;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithImageData:(id)arg1 dataType:(long long)arg2 isTemplate:(BOOL)arg3 ;
-(BOOL)isTemplate;
-(NSData *)imageData;
-(id)_initForSubclass;
-(id)initWithImageData:(id)arg1 dataType:(long long)arg2 ;
-(id)initWithImagePNGData:(id)arg1 ;
-(NSData *)imagePNGData;
@end

