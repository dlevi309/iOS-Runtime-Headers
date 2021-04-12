/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (assign,nonatomic) int size; 
@property (assign,nonatomic) BOOL httpOnly; 
@property (assign,nonatomic) BOOL secure; 
@property (assign,nonatomic) BOOL session; 
@property (assign,nonatomic) long long sameSite; 
+(id)safe_initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 size:(int)arg6 httpOnly:(BOOL)arg7 secure:(BOOL)arg8 session:(BOOL)arg9 sameSite:(long long)arg10 ;
-(NSString *)name;
-(NSString *)domain;
-(void)setName:(NSString *)arg1 ;
-(int)size;
-(NSString *)value;
-(NSString *)path;
-(void)setValue:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setSize:(int)arg1 ;
-(BOOL)session;
-(void)setSession:(BOOL)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)secure;
-(void)setExpires:(double)arg1 ;
-(double)expires;
-(void)setHttpOnly:(BOOL)arg1 ;
-(void)setSameSite:(long long)arg1 ;
-(id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 size:(int)arg6 httpOnly:(BOOL)arg7 secure:(BOOL)arg8 session:(BOOL)arg9 sameSite:(long long)arg10 ;
-(BOOL)httpOnly;
-(long long)sameSite;
@end

