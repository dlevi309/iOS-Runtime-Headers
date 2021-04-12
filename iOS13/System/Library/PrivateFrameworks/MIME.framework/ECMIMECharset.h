/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

@class NSString;


@protocol ECMIMECharset <NSObject>
@property (readonly) unsigned long long encoding; 
@property (nonatomic,copy,readonly) NSString * charsetName; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) BOOL canBeUsedForOutgoingMessages; 
@required
-(NSString *)displayName;
-(unsigned long long)encoding;
-(NSString *)charsetName;
-(BOOL)canBeUsedForOutgoingMessages;

@end

