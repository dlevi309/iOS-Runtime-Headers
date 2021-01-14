/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

@class NSString;


@protocol ECMIMECharset <NSObject>
@property (readonly) unsigned long long encoding; 
@property (nonatomic,copy,readonly) NSString * charsetName; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) BOOL canBeUsedForOutgoingMessages; 
@required
-(unsigned long long)encoding;
-(NSString *)charsetName;
-(NSString *)displayName;
-(BOOL)canBeUsedForOutgoingMessages;

@end

