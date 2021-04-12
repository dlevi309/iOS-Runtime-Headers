/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MFBaseFilterDataConsumer.h>
#import <libobjc.A.dylib/MFGuaranteedCollectingDataConsumer.h>

@protocol MFGuaranteedCollectingDataConsumer;
@class MFLock, NSString;

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer> {

	id<MFGuaranteedCollectingDataConsumer> _mainConsumer;
	MFLock* _consumerLock;
	BOOL _isDone;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)data;
-(long long)appendData:(id)arg1 ;
-(void)done;
-(void)addDataConsumer:(id)arg1 ;
-(id)initWithMainConsumer:(id)arg1 ;
@end

