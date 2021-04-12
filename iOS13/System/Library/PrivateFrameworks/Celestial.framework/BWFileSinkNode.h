/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSinkNode.h>

@protocol BWNodeFileWriterStatusDelegate;
@interface BWFileSinkNode : BWSinkNode {

	id<BWNodeFileWriterStatusDelegate> _recordingStatusDelegate;

}

@property (assign,nonatomic) id<BWNodeFileWriterStatusDelegate> recordingStatusDelegate;              //@synthesize recordingStatusDelegate=_recordingStatusDelegate - In the implementation block
@property (nonatomic,readonly) unsigned long long lastFileSize; 
@property (nonatomic,readonly) SCD_Struct_BW2 lastFileDuration; 
-(id<BWNodeFileWriterStatusDelegate>)recordingStatusDelegate;
-(SCD_Struct_BW2)lastFileDuration;
-(unsigned long long)lastFileSize;
-(void)setRecordingStatusDelegate:(id<BWNodeFileWriterStatusDelegate>)arg1 ;
@end

