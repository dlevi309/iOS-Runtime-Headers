/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StudyLog.framework/StudyLog
*/


@protocol SLGLogClientProtocol <NSObject>
@property (assign,nonatomic,__weak) id<SLGLogClientProtocolDelegate> delegate; 
@required
-(id<SLGLogClientProtocolDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)queryServer:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2;

@end

