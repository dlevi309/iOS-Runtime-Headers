/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSVideoPropertiesExport.h>

@interface NUJSVideoProperties : NUJSProxy <NUJSVideoPropertiesExport>

@property (readonly) id<NUVideoProperties> videoProperties; 
@property (readonly) CGRect cleanAperture; 
@property (readonly) CGRect originalCleanAperture; 
@property (readonly) CGSize originalSize; 
-(CGSize)originalSize;
-(id<NUVideoProperties>)videoProperties;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(CGRect)cleanAperture;
-(BOOL)containsMetadata:(id)arg1 ;
-(CGRect)originalCleanAperture;
-(id)initWithVideoProperties:(id)arg1 context:(id)arg2 ;
@end

