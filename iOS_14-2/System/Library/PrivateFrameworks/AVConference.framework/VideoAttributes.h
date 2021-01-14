/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface VideoAttributes : NSObject <NSCopying, NSCoding> {

	CGSize ratio;
	int orientation;
	int camera;
	BOOL cameraSwitching;
	CGRect contentsRect;
	BOOL videoSourceScreen;
	BOOL videoMirrored;

}

@property (assign,nonatomic) CGSize ratio; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) int camera; 
@property (assign,nonatomic) BOOL cameraSwitching; 
@property (assign,nonatomic) CGRect contentsRect; 
@property (assign,nonatomic) BOOL videoSourceScreen; 
@property (assign,nonatomic) BOOL videoMirrored; 
+(id)videoAttributesWithVideoAttributes:(id)arg1 ;
+(int)videoAttributeCameraForCameraUID:(id)arg1 ;
+(id)cameraUIDForVideoAttributeCamera:(int)arg1 ;
-(int)camera;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(CGRect)contentsRect;
-(id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(CGSize)arg2 contentsRect:(CGRect)arg3 ;
-(id)init;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(id)copyEncodedDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(void)decodeFromNSDictionary:(id)arg1 ;
-(void)setVideoSourceScreen:(BOOL)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(BOOL)videoSourceScreen;
-(BOOL)isEqualToVideoAttributes:(id)arg1 ;
-(CGSize)ratio;
-(id)description;
-(void)setRatio:(CGSize)arg1 ;
-(void)setCamera:(int)arg1 ;
-(int)orientation;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)cameraSwitching;
-(BOOL)videoMirrored;
-(void)setCameraSwitching:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOrientation:(int)arg1 ;
@end

