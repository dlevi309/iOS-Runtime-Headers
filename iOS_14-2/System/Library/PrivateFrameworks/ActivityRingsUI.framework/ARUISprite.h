/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ARUISprite : NSObject <NSCopying> {

	float _size;
	float _opacity;
	 _translation;
	unsigned long long _frameCount;
	unsigned long long _currentFrameIndex;
	 _firstFrameOrigin;
	 _frameSize;
	unsigned long long _frameColumns;

}

@property (nonatomic,readonly)  firstFrameOrigin;                               //@synthesize firstFrameOrigin=_firstFrameOrigin - In the implementation block
@property (nonatomic,readonly)  frameSize;                                      //@synthesize frameSize=_frameSize - In the implementation block
@property (nonatomic,readonly) unsigned long long frameColumns;                 //@synthesize frameColumns=_frameColumns - In the implementation block
@property (nonatomic,readonly)  textureRect; 
@property (assign,nonatomic) float size;                                        //@synthesize size=_size - In the implementation block
@property (assign,nonatomic)  translation;                                      //@synthesize translation=_translation - In the implementation block
@property (assign,nonatomic) float opacity;                                     //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) unsigned long long frameCount;                   //@synthesize frameCount=_frameCount - In the implementation block
@property (assign,nonatomic) unsigned long long currentFrameIndex;              //@synthesize currentFrameIndex=_currentFrameIndex - In the implementation block
+(id)randomSprite;
-(unsigned long long)frameCount;
-(float)size;
-(float)opacity;
-(void)setTranslation:;
-(void)setSize:(float)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(id)description;
-()translation;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)currentFrameIndex;
-()textureRect;
-(void)setCurrentFrameIndex:(unsigned long long)arg1 ;
-()frameSize;
-(id)initWithFrameCount:(unsigned long long)arg1 frameColumns:(unsigned long long)arg2 ;
-(unsigned long long)frameColumns;
-()firstFrameOrigin;
-(id)initWithSprite:(id)arg1 ;
@end

