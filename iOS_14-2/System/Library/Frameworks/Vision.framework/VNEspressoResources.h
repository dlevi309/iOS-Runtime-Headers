/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class NSString;

@interface VNEspressoResources : NSObject {

	SCD_Struct_VN56* _network;
	void* _plan;
	void* _context;
	NSString* _modelName;

}

@property (readonly) SCD_Struct_VN56* network;              //@synthesize network=_network - In the implementation block
@property (readonly) void* plan;                            //@synthesize plan=_plan - In the implementation block
@property (readonly) void* context;                         //@synthesize context=_context - In the implementation block
@property (readonly) NSString * modelName;                  //@synthesize modelName=_modelName - In the implementation block
-(void*)plan;
-(void)free;
-(SCD_Struct_VN56*)network;
-(void*)context;
-(id)initWithModelName:(id)arg1 network:(SCD_Struct_VN56*)arg2 plan:(void*)arg3 context:(void*)arg4 ;
-(NSString *)modelName;
-(id)description;
-(void)dealloc;
@end

