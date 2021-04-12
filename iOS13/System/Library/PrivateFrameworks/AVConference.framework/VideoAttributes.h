/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)orientation;
-(void)setOrientation:(int)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(CGRect)contentsRect;
-(void)setCamera:(int)arg1 ;
-(int)camera;
-(BOOL)videoMirrored;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(CGSize)ratio;
-(void)setRatio:(CGSize)arg1 ;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(BOOL)cameraSwitching;
-(BOOL)videoSourceScreen;
-(BOOL)isEqualToVideoAttributes:(id)arg1 ;
-(id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(CGSize)arg2 contentsRect:(CGRect)arg3 ;
-(void)decodeFromNSDictionary:(id)arg1 ;
-(id)copyEncodedDictionary;
-(void)setCameraSwitching:(BOOL)arg1 ;
-(void)setVideoSourceScreen:(BOOL)arg1 ;
@end

