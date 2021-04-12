/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUAuxiliaryImageRenderResult.h>

@protocol NUAuxiliaryImage;
@class NSString;

@interface _NUAuxiliaryImageRenderResult : _NURenderResult <NUAuxiliaryImageRenderResult> {

	id<NUAuxiliaryImage> _auxiliaryImage;

}

@property (retain) id<NUAuxiliaryImage> auxiliaryImage;              //@synthesize auxiliaryImage=_auxiliaryImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(id<NUAuxiliaryImage>)auxiliaryImage;
-(void)setAuxiliaryImage:(id<NUAuxiliaryImage>)arg1 ;
@end

