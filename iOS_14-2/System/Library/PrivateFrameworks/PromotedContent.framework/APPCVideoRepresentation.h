/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <PromotedContent/APPCContentRepresentation.h>
#import <libobjc.A.dylib/APPCPromotableVideoRepresentation.h>

@class NSURL;

@interface APPCVideoRepresentation : APPCContentRepresentation <APPCPromotableVideoRepresentation> {

	 fileSize;
	 skipThreshold;
	 skipEnabled;
	 unbranded;
	 bitrate;
	 signalStrength;
	 connectionType;
	 duration;

}

@property (readonly,nonatomic) long long fileSize; 
@property (readonly,nonatomic) double skipThreshold; 
@property (readonly,nonatomic) BOOL skipEnabled; 
@property (readonly,nonatomic) BOOL unbranded; 
@property (readonly,nonatomic) double bitrate; 
@property (readonly,nonatomic) unsigned long long signalStrength; 
@property (readonly,nonatomic) long long connectionType; 
@property (copy,nonatomic) NSURL * videoURL; 
-(long long)connectionType;
-(void)setVideoURL:(NSURL *)arg1 ;
-(long long)fileSize;
-(double)bitrate;
-(NSURL *)videoURL;
-(unsigned long long)signalStrength;
-(double)skipThreshold;
-(BOOL)skipEnabled;
-(BOOL)unbranded;
-(id)initWithIdentifier:(id)arg1 adType:(long long)arg2 desiredPosition:(long long)arg3 videoURL:(id)arg4 duration:(double)arg5 fileSize:(long long)arg6 skipThreshold:(double)arg7 skipEnabled:(BOOL)arg8 unbranded:(BOOL)arg9 bitrate:(double)arg10 connectionType:(long long)arg11 signalStrength:(unsigned long long)arg12 tapAction:(id)arg13 ;
@end

