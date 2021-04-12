/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/MRProtocolMessage.h>

@class MRAudioDataBlock, MRAudioBuffer;

@interface MRSendVoiceInputMessage : MRProtocolMessage {

	MRAudioDataBlock* _dataBlock;

}

@property (nonatomic,readonly) MRAudioBuffer * buffer; 
@property (nonatomic,readonly) SCD_Struct_MR14 time; 
@property (nonatomic,readonly) float gain; 
-(unsigned long long)type;
-(unsigned long long)priority;
-(SCD_Struct_MR14)time;
-(MRAudioBuffer *)buffer;
-(float)gain;
-(void)_initializeDataIfNecessary;
-(id)initWithBuffer:(id)arg1 time:(SCD_Struct_MR14)arg2 gain:(float)arg3 ;
@end

