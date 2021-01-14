/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSURL, NSString;

@interface IMImageSource : NSObject {

	CGImageSourceRef _imageSourceRef;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) BOOL fileExists; 
@property (nonatomic,readonly) CGImageSourceRef imageSourceRef;              //@synthesize imageSourceRef=_imageSourceRef - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * filePath; 
-(NSString *)filePath;
-(CGImageSourceRef)imageSourceRef;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(BOOL)fileExists;
-(void)dealloc;
@end

