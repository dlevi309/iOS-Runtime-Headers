/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTMediaItem.h>

@class NSString, NSURL;

@interface JTLocalAssetMediaItem : JTMediaItem {

	NSString* _localFileName;
	NSURL* _localFileURL;

}

@property (nonatomic,copy) NSString * localFileName;              //@synthesize localFileName=_localFileName - In the implementation block
@property (nonatomic,retain) NSURL * localFileURL;                //@synthesize localFileURL=_localFileURL - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)info;
-(BOOL)canSaveToCameraRoll;
-(NSString *)localFileName;
-(NSURL *)localFileURL;
-(void)setLocalFileURL:(NSURL *)arg1 ;
-(id)initWithInfo:(id)arg1 delegate:(id)arg2 ;
-(void)setLocalFileName:(NSString *)arg1 ;
@end

