/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

@class NSString;

@interface ARSLAMState : NSObject <ARResultData> {

	const CV3DSLAMStateContextRef _slamState;
	double _timestamp;

}

@property (nonatomic,readonly) const CV3DSLAMStateContextRef slamState;              //@synthesize slamState=_slamState - In the implementation block
@property (assign,nonatomic) double timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)dealloc;
-(id)initWithSLAMState:(CV3DSLAMStateContextRef)arg1 ;
-(const CV3DSLAMStateContextRef)slamState;
-(void)setSLAMState:(CV3DSLAMStateContextRef)arg1 ;
@end

