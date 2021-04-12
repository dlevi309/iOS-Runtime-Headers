/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(NSString *)filePath;
-(CGImageSourceRef)imageSourceRef;
-(BOOL)fileExists;
@end

