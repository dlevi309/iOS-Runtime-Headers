/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <libobjc.A.dylib/CVAPostProcessingRequest.h>

@class NSData, NSString;

@interface CVAPostProcessingRequestImplColorCube : NSObject <CVAPostProcessingRequest> {

	BOOL _isMono;
	NSData* _backgroundColorCube;
	NSData* _foregroundColorCube;
	NSData* _singleColorCube;

}

@property (retain) NSData * backgroundColorCube;                    //@synthesize backgroundColorCube=_backgroundColorCube - In the implementation block
@property (retain) NSData * foregroundColorCube;                    //@synthesize foregroundColorCube=_foregroundColorCube - In the implementation block
@property (retain) NSData * singleColorCube;                        //@synthesize singleColorCube=_singleColorCube - In the implementation block
@property (assign) BOOL isMono;                                     //@synthesize isMono=_isMono - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)backgroundColorCube;
-(NSData *)foregroundColorCube;
-(void)setBackgroundColorCube:(NSData *)arg1 ;
-(void)setForegroundColorCube:(NSData *)arg1 ;
-(NSData *)singleColorCube;
-(void)setSingleColorCube:(NSData *)arg1 ;
-(BOOL)isMono;
-(void)setIsMono:(BOOL)arg1 ;
@end

