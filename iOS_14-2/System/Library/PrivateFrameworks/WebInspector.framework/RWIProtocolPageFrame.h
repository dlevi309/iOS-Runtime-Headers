/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * loaderId; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * securityOrigin; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * parentId; 
@property (nonatomic,copy) NSString * name; 
+(id)safe_initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5 ;
+(id)ik_globalFrame;
+(id)ik_pageFrameFromDOMDocument:(id)arg1 ;
-(id)ik_resourceTreeWithResources:(id)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)url;
-(NSString *)name;
-(void)setUrl:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)parentId;
-(NSString *)securityOrigin;
-(void)setParentId:(NSString *)arg1 ;
-(void)setSecurityOrigin:(NSString *)arg1 ;
-(void)setLoaderId:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5 ;
-(NSString *)loaderId;
@end

