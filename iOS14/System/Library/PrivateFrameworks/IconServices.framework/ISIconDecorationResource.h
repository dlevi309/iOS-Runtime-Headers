/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@protocol ISScalableCompositorResource;
@class ISIconDecoration, NSString;

@interface ISIconDecorationResource : NSObject <ISScalableCompositorResource> {

	ISIconDecoration* _decoration;
	id<ISScalableCompositorResource> _internalResource;

}

@property (readonly) id<ISScalableCompositorResource> internalResource;              //@synthesize internalResource=_internalResource - In the implementation block
@property (readonly) ISIconDecoration * decoration;                                  //@synthesize decoration=_decoration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)configureWithType:(id)arg1 ;
-(id)initWithDecoration:(id)arg1 ;
-(ISIconDecoration *)decoration;
-(id<ISScalableCompositorResource>)internalResource;
@end

