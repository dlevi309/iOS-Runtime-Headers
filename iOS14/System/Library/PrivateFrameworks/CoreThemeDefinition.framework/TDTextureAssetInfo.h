/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface TDTextureAssetInfo : NSObject <NSCopying> {

	BOOL _flipped;
	NSURL* _fileURL;
	unsigned long long _mipLevel;
	long long _textureFace;

}

@property (nonatomic,copy) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSURL * mipsURL; 
@property (assign,nonatomic) unsigned long long mipLevel;              //@synthesize mipLevel=_mipLevel - In the implementation block
@property (assign,nonatomic) long long textureFace;                    //@synthesize textureFace=_textureFace - In the implementation block
@property (assign,nonatomic) BOOL flipped;                             //@synthesize flipped=_flipped - In the implementation block
-(void)setFileURL:(NSURL *)arg1 ;
-(BOOL)flipped;
-(void)setFlipped:(BOOL)arg1 ;
-(NSURL *)fileURL;
-(id)description;
-(NSURL *)mipsURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned long long)mipLevel;
-(long long)textureFace;
-(void)setMipLevel:(unsigned long long)arg1 ;
-(void)setTextureFace:(long long)arg1 ;
-(void)setMipsURL:(NSURL *)arg1 ;
@end

