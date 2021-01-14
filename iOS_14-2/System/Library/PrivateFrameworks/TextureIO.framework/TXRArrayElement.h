/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
*/

#import <TextureIO/TextureIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface TXRArrayElement : NSObject <NSCopying> {

	NSMutableArray* _faces;

}

@property (readonly) NSArray * faces;              //@synthesize faces=_faces - In the implementation block
-(NSArray *)faces;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 cubemap:(BOOL)arg3 dataSourceProvider:(id)arg4 ;
-(id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 dimensions:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 alphaInfo:(BOOL)arg5 cubemap:(id)arg6 ;
-(void)setImage:(id)arg1 atFace:(unsigned long long)arg2 ;
@end

