/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUAuxiliaryImage>)auxiliaryImage;
-(void)setAuxiliaryImage:(id<NUAuxiliaryImage>)arg1 ;
@end

