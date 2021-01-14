/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageCookie : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * path; 
@property (assign,nonatomic) double expires; 
@property (assign,nonatomic) BOOL session; 
@property (assign,nonatomic) BOOL httpOnly; 
@property (assign,nonatomic) BOOL secure; 
@property (assign,nonatomic) long long sameSite; 
+(id)safe_initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 session:(BOOL)arg6 httpOnly:(BOOL)arg7 secure:(BOOL)arg8 sameSite:(long long)arg9 ;
-(BOOL)secure;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)httpOnly;
-(long long)sameSite;
-(void)setSameSite:(long long)arg1 ;
-(void)setHttpOnly:(BOOL)arg1 ;
-(double)expires;
-(void)setExpires:(double)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)session;
-(NSString *)domain;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(void)setSession:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 session:(BOOL)arg6 httpOnly:(BOOL)arg7 secure:(BOOL)arg8 sameSite:(long long)arg9 ;
@end

