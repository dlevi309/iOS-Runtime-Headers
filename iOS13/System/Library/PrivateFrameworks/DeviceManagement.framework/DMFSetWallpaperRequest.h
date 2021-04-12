/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSURL, NSData, NSFileHandle;

@interface DMFSetWallpaperRequest : DMFTaskRequest {

	NSURL* _imageURL;
	NSData* _imageData;
	long long _location;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                         //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSData * imageData;                       //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) long long location;                     //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSFileHandle *)fileHandle;
-(long long)location;
-(void)setLocation:(long long)arg1 ;
-(NSURL *)imageURL;
-(NSData *)imageData;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
@end

