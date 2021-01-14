/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSDisplayConfigurationRequest.h>

@interface FBSMutableDisplayConfigurationRequest : FBSDisplayConfigurationRequest

@property (assign,nonatomic) long long overscanCompensation; 
@property (assign,nonatomic) CGSize nativePixelSize; 
@property (assign,nonatomic) double refreshRate; 
@property (assign,nonatomic) long long hdrMode; 
-(void)setRefreshRate:(double)arg1 ;
-(void)setNativePixelSize:(CGSize)arg1 ;
-(void)setOverscanCompensation:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHdrMode:(long long)arg1 ;
@end

