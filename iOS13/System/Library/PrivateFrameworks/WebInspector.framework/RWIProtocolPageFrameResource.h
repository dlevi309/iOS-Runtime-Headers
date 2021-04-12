/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrameResource : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * mimeType; 
@property (assign,nonatomic) BOOL failed; 
@property (assign,nonatomic) BOOL canceled; 
@property (nonatomic,copy) NSString * sourceMapURL; 
@property (nonatomic,copy) NSString * targetId; 
+(id)safe_initWithUrl:(id)arg1 type:(long long)arg2 mimeType:(id)arg3 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)url;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(BOOL)failed;
-(void)setFailed:(BOOL)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)targetId;
-(void)setTargetId:(NSString *)arg1 ;
-(void)setSourceMapURL:(NSString *)arg1 ;
-(NSString *)sourceMapURL;
-(id)initWithUrl:(id)arg1 type:(long long)arg2 mimeType:(id)arg3 ;
@end

