/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTarget:;
-(BOOL)grayscale;
-(void)setGrayscale:(BOOL)arg1 ;
-(void)update:(double)arg1 ;
-(id)init;
-(void)setValue:;
-(void)addInstance:(id)arg1 ;
-(NSMutableArray *)springInstances;
-(void)setSpringsStates:(unsigned long long)arg1 ;
-(InstanceInfo*)instanceData;
@end

