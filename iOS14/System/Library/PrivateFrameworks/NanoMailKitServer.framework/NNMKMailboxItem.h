/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/

@class NSString;


@protocol NNMKMailboxItem <NSObject>
@property (nonatomic,retain) NSString * subject; 
@property (nonatomic,retain) NSString * preview; 
@property (assign,nonatomic) unsigned long long status; 
@required
-(NSString *)subject;
-(NSString *)preview;
-(void)removeState:(unsigned long long)arg1;
-(void)setPreview:(id)arg1;
-(void)setStatus:(unsigned long long)arg1;
-(void)addState:(unsigned long long)arg1;
-(void)setSubject:(id)arg1;
-(unsigned long long)status;
-(BOOL)checkState:(unsigned long long)arg1;

@end

