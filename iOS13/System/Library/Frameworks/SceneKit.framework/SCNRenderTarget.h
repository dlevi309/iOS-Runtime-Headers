/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class CIImage, NSArray, NSString;

@interface SCNRenderTarget : NSObject {

	SCD_Struct_SC38 _description;
	 _size;
	unsigned long long _arrayLength;
	CIImage* _ciImage;
	NSArray* _sliceTextures;
	id _texture;
	NSString* _name;
	long long _referenceCount;
	long long _timeStamp;

}

@property (nonatomic,retain) id texture;                                      //@synthesize texture=_texture - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long referenceCount;                        //@synthesize referenceCount=_referenceCount - In the implementation block
@property (assign,nonatomic) long long timeStamp;                             //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,readonly) BOOL viewportDependant; 
@property (nonatomic,readonly) unsigned char renderBufferFormat; 
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setTexture:(id)arg1 ;
-(id)texture;
-(long long)timeStamp;
-(void)setTimeStamp:(long long)arg1 ;
-(id)ciImage;
-(id)initWithDescription:(SCD_Struct_SC38*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)viewportDependant;
-(unsigned char)renderBufferFormat;
-(BOOL)matchesDescription:(SCD_Struct_SC38*)arg1 size:(unsigned long long)arg2 ;
-(id)textureForSliceIndex:(unsigned long long)arg1 ;
-(long long)referenceCount;
-(void)setReferenceCount:(long long)arg1 ;
@end

