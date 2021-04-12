/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class NSString, ADImageDescriptor;

@interface ADEspressoImageDescriptor : NSObject {

	NSString* _name;
	ADImageDescriptor* _imageDescriptor;

}

@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) ADImageDescriptor * imageDescriptor;              //@synthesize imageDescriptor=_imageDescriptor - In the implementation block
-(NSString *)name;
-(ADImageDescriptor *)imageDescriptor;
-(id)initWithName:(id)arg1 pixelFormat:(unsigned)arg2 portraitSize:(CGSize)arg3 landscapeSize:(CGSize)arg4 ;
-(id)initWithName:(id)arg1 pixelFormat:(unsigned)arg2 size:(CGSize)arg3 ;
@end

