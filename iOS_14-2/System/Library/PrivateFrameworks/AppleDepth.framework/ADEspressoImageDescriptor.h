/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class NSString, ADImageDescriptor;

@interface ADEspressoImageDescriptor : NSObject {

	BOOL _isInput;
	NSString* _name;
	ADImageDescriptor* _imageDescriptor;

}

@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) ADImageDescriptor * imageDescriptor;              //@synthesize imageDescriptor=_imageDescriptor - In the implementation block
@property (nonatomic,readonly) BOOL isInput;                                     //@synthesize isInput=_isInput - In the implementation block
-(ADImageDescriptor *)imageDescriptor;
-(NSString *)name;
-(BOOL)isInput;
-(id)initWithName:(id)arg1 pixelFormat:(unsigned)arg2 portraitSize:(CGSize)arg3 landscapeSize:(CGSize)arg4 isInput:(BOOL)arg5 ;
-(id)initWithName:(id)arg1 pixelFormat:(unsigned)arg2 size:(CGSize)arg3 isInput:(BOOL)arg4 ;
@end

