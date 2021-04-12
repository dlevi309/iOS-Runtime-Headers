/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


#import <GameController/GameController-Structs.h>
@class NSNumber, NSString, NSData;

@interface _GCCControllerHIDServiceInfo : NSObject {

	IOHIDServiceClientRef _service;
	NSNumber* _registryID;
	NSString* _name;
	BOOL _isPreallocatedSiriRemote;
	NSData* _inputData;

}

@property (nonatomic,readonly) IOHIDServiceClientRef service; 
@property (nonatomic,retain) NSData * inputData;                           //@synthesize inputData=_inputData - In the implementation block
@property (assign,nonatomic) BOOL isPreallocatedSiriRemote;                //@synthesize isPreallocatedSiriRemote=_isPreallocatedSiriRemote - In the implementation block
-(void)dealloc;
-(id)name;
-(id)registryID;
-(IOHIDServiceClientRef)service;
-(id)initWithService:(IOHIDServiceClientRef)arg1 ;
-(NSData *)inputData;
-(void)setInputData:(NSData *)arg1 ;
-(BOOL)isPreallocatedSiriRemote;
-(void)setIsPreallocatedSiriRemote:(BOOL)arg1 ;
@end

