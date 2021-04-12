/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

@class NSString;


@protocol NNMKMailboxItem <NSObject>
@property (nonatomic,retain) NSString * subject; 
@property (nonatomic,retain) NSString * preview; 
@property (assign,nonatomic) unsigned long long status; 
@required
-(unsigned long long)status;
-(NSString *)subject;
-(void)setSubject:(id)arg1;
-(void)setStatus:(unsigned long long)arg1;
-(NSString *)preview;
-(void)setPreview:(id)arg1;
-(void)addState:(unsigned long long)arg1;
-(void)removeState:(unsigned long long)arg1;
-(BOOL)checkState:(unsigned long long)arg1;

@end

