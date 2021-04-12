/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

