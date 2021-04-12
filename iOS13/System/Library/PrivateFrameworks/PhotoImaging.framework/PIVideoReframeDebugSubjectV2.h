/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIVideoReframeDebugSubject.h>

@interface PIVideoReframeDebugSubjectV2 : PIVideoReframeDebugSubject {

	BOOL _isVirtualHead;
	BOOL _isVirtualTail;

}

@property (assign) BOOL isVirtualHead;              //@synthesize isVirtualHead=_isVirtualHead - In the implementation block
@property (assign) BOOL isVirtualTail;              //@synthesize isVirtualTail=_isVirtualTail - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isVirtualHead;
-(void)setIsVirtualHead:(BOOL)arg1 ;
-(BOOL)isVirtualTail;
-(void)setIsVirtualTail:(BOOL)arg1 ;
@end

