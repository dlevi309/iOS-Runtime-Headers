/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRColorProtobuf;

@interface MRColorComponents : NSObject <NSCopying> {

	float _red;
	float _green;
	float _blue;
	float _alpha;

}

@property (nonatomic,readonly) _MRColorProtobuf * protobuf; 
@property (assign,nonatomic) float red;                                  //@synthesize red=_red - In the implementation block
@property (assign,nonatomic) float green;                                //@synthesize green=_green - In the implementation block
@property (assign,nonatomic) float blue;                                 //@synthesize blue=_blue - In the implementation block
@property (assign,nonatomic) float alpha;                                //@synthesize alpha=_alpha - In the implementation block
-(void)setGreen:(float)arg1 ;
-(float)red;
-(float)alpha;
-(void)setRed:(float)arg1 ;
-(id)description;
-(float)blue;
-(_MRColorProtobuf *)protobuf;
-(float)green;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setBlue:(float)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

