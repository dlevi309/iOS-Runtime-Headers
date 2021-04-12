/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PVMultiBlendLayerParams : NSObject <NSSecureCoding, NSCopying> {

	float _opacity;
	int _mode;

}

@property (nonatomic,readonly) int hgBlendMode; 
@property (assign,nonatomic) float opacity;                  //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int mode;                       //@synthesize mode=_mode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(id)initWithOpacity:(float)arg1 mode:(int)arg2 ;
-(int)hgBlendMode;
-(void)_sharedInitWithOpacity:(float)arg1 mode:(int)arg2 ;
-(id)blendModeName;
@end

