/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


#import <FMCore/FMCore-Structs.h>
@interface FMStateCapture : NSObject {

	/*^block*/id _stateCaptureBlock;
	unsigned long long _handle;

}

@property (assign,nonatomic) unsigned long long handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) id stateCaptureBlock;                     //@synthesize stateCaptureBlock=_stateCaptureBlock - In the implementation block
-(void)setHandle:(unsigned long long)arg1 ;
-(unsigned long long)handle;
-(id)init;
-(void)registerHandlerforStateCapture;
-(id)stateCaptureBlock;
-(os_state_data_s*)stateDataForDictionary:(id)arg1 title:(id)arg2 ;
-(os_state_data_s*)_stateCapture;
-(void)setStateCaptureBlock:(id)arg1 ;
-(void)unregisterHandlerforStateCapture;
-(void)dealloc;
@end

