/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


#import <FMCore/FMCore-Structs.h>
@interface FMStateCapture : NSObject {

	/*^block*/id _stateCaptureBlock;
	unsigned long long _handle;

}

@property (assign,nonatomic) unsigned long long handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) id stateCaptureBlock;                     //@synthesize stateCaptureBlock=_stateCaptureBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)handle;
-(void)setHandle:(unsigned long long)arg1 ;
-(os_state_data_s*)_stateCapture;
-(os_state_data_s*)stateDataForDictionary:(id)arg1 title:(id)arg2 ;
-(void)registerHandlerforStateCapture;
-(void)unregisterHandlerforStateCapture;
-(id)stateCaptureBlock;
-(void)setStateCaptureBlock:(id)arg1 ;
@end

