/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

