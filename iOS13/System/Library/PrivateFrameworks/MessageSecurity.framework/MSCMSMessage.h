/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

@class MSOID, NSData;


@protocol MSCMSMessage <MSMessage>
@property (readonly) MSOID * type; 
@property (nonatomic,retain) NSData * dataContent; 
@property (retain) id<MSCMSMessage> embeddedContent; 
@property (retain) MSOID * contentType; 
@required
-(MSOID *)type;
-(MSOID *)contentType;
-(void)setContentType:(id)arg1;
-(void)setDataContent:(id)arg1;
-(NSData *)dataContent;
-(void)setEmbeddedContent:(id)arg1;
-(id<MSCMSMessage>)embeddedContent;

@end

