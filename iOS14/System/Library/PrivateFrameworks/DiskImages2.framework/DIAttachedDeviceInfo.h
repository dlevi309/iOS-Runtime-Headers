/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/


@class NSString, NSURL;

@interface DIAttachedDeviceInfo : NSObject {

	NSString* _BSDname;
	NSURL* _imageURL;

}

@property (readonly) NSString * BSDname;              //@synthesize BSDname=_BSDname - In the implementation block
@property (readonly) NSURL * imageURL;                //@synthesize imageURL=_imageURL - In the implementation block
+(id)newDevicesArrayWithError:(id*)arg1 ;
+(id)copyImageURLFromDevice:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(NSURL *)imageURL;
-(NSString *)BSDname;
-(id)initWithService:(unsigned)arg1 error:(id*)arg2 ;
@end

