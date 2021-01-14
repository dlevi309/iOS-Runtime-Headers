/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSString, CAMTimelapseState, NSArray;

@interface CAMTimelapseBackendSessionContext : NSObject {

	NSString* _timelapseUUID;
	CAMTimelapseState* _state;
	NSArray* _filesToDelete;
	NSArray* _filesToWrite;

}

@property (nonatomic,readonly) NSString * timelapseUUID;              //@synthesize timelapseUUID=_timelapseUUID - In the implementation block
@property (nonatomic,retain) CAMTimelapseState * state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSArray * filesToDelete;                 //@synthesize filesToDelete=_filesToDelete - In the implementation block
@property (nonatomic,retain) NSArray * filesToWrite;                  //@synthesize filesToWrite=_filesToWrite - In the implementation block
-(id)init;
-(id)description;
-(void)setState:(CAMTimelapseState *)arg1 ;
-(CAMTimelapseState *)state;
-(void)setFilesToDelete:(NSArray *)arg1 ;
-(NSArray *)filesToDelete;
-(NSString *)timelapseUUID;
-(id)initWithTimelapseUUID:(id)arg1 ;
-(NSArray *)filesToWrite;
-(void)setFilesToWrite:(NSArray *)arg1 ;
@end

