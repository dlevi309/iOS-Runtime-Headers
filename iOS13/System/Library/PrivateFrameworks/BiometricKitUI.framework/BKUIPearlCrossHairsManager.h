/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/


#import <BiometricKitUI/BiometricKitUI-Structs.h>
@class NSMutableArray;

@interface BKUIPearlCrossHairsManager : NSObject {

	vector<InstanceInfo, std::__1::allocator<InstanceInfo> >* _instanceVector;
	NSMutableArray* _springInstances;

}

@property (readonly) NSMutableArray * springInstances;              //@synthesize springInstances=_springInstances - In the implementation block
@property (readonly) InstanceInfo* instanceData; 
@property (assign,nonatomic) BOOL grayscale; 
-(id)init;
-(void)setTarget:;
-(void)setValue:;
-(void)update:(double)arg1 ;
-(BOOL)grayscale;
-(void)setGrayscale:(BOOL)arg1 ;
-(void)addInstance:(id)arg1 ;
-(NSMutableArray *)springInstances;
-(void)setSpringsStates:(unsigned long long)arg1 ;
-(InstanceInfo*)instanceData;
@end

