/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

@class NSString;

@interface ARMeshList : NSObject <ARResultData> {

	double _timestamp;
	const CV3DReconMeshListRef _meshList;

}

@property (nonatomic,readonly) const CV3DReconMeshListRef meshList;              //@synthesize meshList=_meshList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(void)dealloc;
-(const CV3DReconMeshListRef)meshList;
-(id)initWithMeshList:(CV3DReconMeshListRef)arg1 timestamp:(double)arg2 ;
-(void)setMeshList:(CV3DReconMeshListRef)arg1 timestamp:(double)arg2 ;
@end

