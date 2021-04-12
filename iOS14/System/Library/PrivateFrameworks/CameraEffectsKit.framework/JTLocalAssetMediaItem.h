/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXMediaItem.h>

@class NSString, NSURL;

@interface JTLocalAssetMediaItem : JFXMediaItem {

	NSString* _localFileName;
	NSURL* _localFileURL;

}

@property (nonatomic,copy) NSString * localFileName;              //@synthesize localFileName=_localFileName - In the implementation block
@property (nonatomic,retain) NSURL * localFileURL;                //@synthesize localFileURL=_localFileURL - In the implementation block
-(id)info;
-(id)initWithURL:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setLocalFileURL:(NSURL *)arg1 ;
-(NSURL *)localFileURL;
-(NSString *)localFileName;
-(id)initWithInfo:(id)arg1 delegate:(id)arg2 ;
-(BOOL)canSaveToCameraRoll;
-(void)setLocalFileName:(NSString *)arg1 ;
@end

