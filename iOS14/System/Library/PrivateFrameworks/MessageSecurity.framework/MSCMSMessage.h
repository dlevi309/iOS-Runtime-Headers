/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

@class MSOID, NSData;


@protocol MSCMSMessage <MSMessage>
@property (readonly) MSOID * type; 
@property (nonatomic,retain) NSData * dataContent; 
@property (retain) id<MSCMSMessage> embeddedContent; 
@property (retain) MSOID * contentType; 
@required
-(MSOID *)contentType;
-(MSOID *)type;
-(void)setContentType:(id)arg1;
-(void)setDataContent:(id)arg1;
-(NSData *)dataContent;
-(void)setEmbeddedContent:(id)arg1;
-(id<MSCMSMessage>)embeddedContent;

@end

