/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <libobjc.A.dylib/CVALightRequest.h>

@class NSDictionary, NSString;

@interface CVALightRequestImplBase : NSObject <CVALightRequest> {

	float _portraitStyleStrength;
	NSDictionary* _faceKitProcessOutput;

}

@property (retain) NSDictionary * faceKitProcessOutput;              //@synthesize faceKitProcessOutput=_faceKitProcessOutput - In the implementation block
@property (assign) float portraitStyleStrength;                      //@synthesize portraitStyleStrength=_portraitStyleStrength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSDictionary *)faceKitProcessOutput;
-(void)setFaceKitProcessOutput:(NSDictionary *)arg1 ;
-(float)portraitStyleStrength;
-(void)setPortraitStyleStrength:(float)arg1 ;
@end

