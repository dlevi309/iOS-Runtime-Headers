/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(unsigned long long)imageID;
-(void)setImageID:(unsigned long long)arg1 ;
@end

