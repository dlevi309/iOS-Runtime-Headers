/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
*/

@class NSRunLoop;


@protocol CoreDAVTaskManager <NSObject>
@property (nonatomic,retain) NSRunLoop * workRunLoop; 
@required
-(void)shutdown;
-(void)submitIndependentCoreDAVTask:(id)arg1;
-(void)submitQueuedCoreDAVTask:(id)arg1;
-(void)coreDAVTaskRequestModal:(id)arg1;
-(void)coreDAVTaskEndModal:(id)arg1;
-(void)coreDAVTaskDidFinish:(id)arg1;
-(NSRunLoop *)workRunLoop;
-(void)setWorkRunLoop:(id)arg1;

@end

