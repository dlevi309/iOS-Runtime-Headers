/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMFitnessMachineInternal;

@interface CMFitnessMachine : NSObject {

	CMFitnessMachineInternal* _internal;

}

@property (nonatomic,readonly) CMFitnessMachineInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(CMFitnessMachineInternal *)_internal;
-(id)init;
-(void)feedFitnessMachineData:(id)arg1 ;
-(void)dealloc;
@end

