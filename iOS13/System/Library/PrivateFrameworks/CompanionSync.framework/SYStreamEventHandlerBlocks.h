/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol SYStreamEventHandlerBlocks <NSObject>
@property (nonatomic,copy) id onOpenComplete; 
@property (nonatomic,copy) id onBytesAvailable; 
@property (nonatomic,copy) id onSpaceAvailable; 
@property (nonatomic,copy) id onEndOfFile; 
@property (nonatomic,copy) id onError; 
@property (nonatomic,copy) id onClose; 
@required
-(id)onOpenComplete;
-(void)setOnOpenComplete:(/*^block*/id)arg1;
-(id)onBytesAvailable;
-(void)setOnBytesAvailable:(/*^block*/id)arg1;
-(id)onSpaceAvailable;
-(void)setOnSpaceAvailable:(/*^block*/id)arg1;
-(id)onEndOfFile;
-(void)setOnEndOfFile:(/*^block*/id)arg1;
-(id)onError;
-(void)setOnError:(/*^block*/id)arg1;
-(id)onClose;
-(void)setOnClose:(/*^block*/id)arg1;

@end

