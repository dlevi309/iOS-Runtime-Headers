/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface MNGuidanceJunctionViewImage : NSObject <NSSecureCoding> {

	unsigned long long _imageID;
	NSData* _imageData;

}

@property (nonatomic,readonly) unsigned long long imageID;              //@synthesize imageID=_imageID - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                      //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)imageID;
-(NSData *)imageData;
-(void)setImageID:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
@end

