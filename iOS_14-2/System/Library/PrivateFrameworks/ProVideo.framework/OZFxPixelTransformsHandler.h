/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROAPIObject.h>
#import <libobjc.A.dylib/FxPixelTransformsAPI.h>

@class NSString;

@interface OZFxPixelTransformsHandler : NSObject <PROAPIObject, FxPixelTransformsAPI>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setAgent:(const LiAgent*)arg1 ;
-(PCMatrix44Tmpl<double>)pixelTransform;
-(PCMatrix44Tmpl<double>)inversePixelTransform;
-(PCMatrix44Tmpl<double>)destinationPixelTransform;
-(PCMatrix44Tmpl<double>)destinationInversePixelTransform;
-(void)setPreTransform:(const PCMatrix44Tmpl<double>*)arg1 ;
-(void)setPostTransform:(const PCMatrix44Tmpl<double>*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
@end

