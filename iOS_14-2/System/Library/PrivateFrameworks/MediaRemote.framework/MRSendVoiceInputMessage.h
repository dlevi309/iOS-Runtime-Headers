/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)gain;
-(SCD_Struct_MR14)time;
-(MRAudioBuffer *)buffer;
-(unsigned long long)type;
-(unsigned long long)priority;
-(void)_initializeDataIfNecessary;
-(id)initWithBuffer:(id)arg1 time:(SCD_Struct_MR14)arg2 gain:(float)arg3 ;
@end

