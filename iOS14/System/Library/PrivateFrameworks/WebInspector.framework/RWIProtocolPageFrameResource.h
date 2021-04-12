/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCanceled:(BOOL)arg1 ;
-(NSString *)mimeType;
-(BOOL)canceled;
-(void)setType:(long long)arg1 ;
-(void)setFailed:(BOOL)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)url;
-(BOOL)failed;
-(NSString *)targetId;
-(void)setUrl:(NSString *)arg1 ;
-(long long)type;
-(void)setTargetId:(NSString *)arg1 ;
-(void)setSourceMapURL:(NSString *)arg1 ;
-(NSString *)sourceMapURL;
-(id)initWithUrl:(id)arg1 type:(long long)arg2 mimeType:(id)arg3 ;
@end

