/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOperation.h>
#import <AVFCore/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>

@class AVAssetWriterFigAssetWriterNotificationHandler, NSString;

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {

	OpaqueFigAssetWriterRef _figAssetWriter;
	AVAssetWriterFigAssetWriterNotificationHandler* _notificationHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(id)initWithFigAssetWriter:(OpaqueFigAssetWriterRef)arg1 ;
-(void)didEnterTerminalState;
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
@end

