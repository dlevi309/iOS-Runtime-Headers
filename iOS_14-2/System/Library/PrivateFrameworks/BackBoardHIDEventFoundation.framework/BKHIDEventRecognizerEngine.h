/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKHIDEventProcessor.h>

@class NSMutableArray, NSString;

@interface BKHIDEventRecognizerEngine : NSObject <BKHIDEventProcessor> {

	os_unfair_lock_s _lock;
	NSMutableArray* _recognizers;
	NSMutableArray* _blocks;

}

@property (nonatomic,retain) NSMutableArray * recognizers;              //@synthesize recognizers=_recognizers - In the implementation block
@property (nonatomic,retain) NSMutableArray * blocks;                   //@synthesize blocks=_blocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)removeRecognizer:(id)arg1 ;
-(NSMutableArray *)blocks;
-(NSMutableArray *)recognizers;
-(long long)processEvent:(inout _IOHIDEvent*)arg1 sender:(id)arg2 dispatcher:(id)arg3 ;
-(void)setBlocks:(NSMutableArray *)arg1 ;
-(void)addRecognizer:(id)arg1 recognitionBlock:(/*^block*/id)arg2 ;
-(void)setRecognizers:(NSMutableArray *)arg1 ;
@end

