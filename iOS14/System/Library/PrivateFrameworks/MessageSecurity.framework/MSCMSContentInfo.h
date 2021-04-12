/*
* Generated on Thursday, January 14, 2021 at 2:27:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
*/

#import <libobjc.A.dylib/MSMessage.h>

@protocol MSCMSMessage;
@class NSData, MSOID, NSString;

@interface MSCMSContentInfo : NSObject <MSMessage> {

	NSData* _content;
	id<MSCMSMessage> _embeddedContent;
	MSOID* _contentType;

}

@property (retain) NSData * content;                                //@synthesize content=_content - In the implementation block
@property (retain) id<MSCMSMessage> embeddedContent;                //@synthesize embeddedContent=_embeddedContent - In the implementation block
@property (retain) MSOID * contentType;                             //@synthesize contentType=_contentType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decodeMessageSecurityObject:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(NSData *)content;
-(void)setContent:(NSData *)arg1 ;
-(MSOID *)contentType;
-(void)setContentType:(MSOID *)arg1 ;
-(id)encodeMessageSecurityObject:(id*)arg1 ;
-(void)setEmbeddedContent:(id<MSCMSMessage>)arg1 ;
-(id<MSCMSMessage>)embeddedContent;
-(id)initWithEmbeddedContent:(id)arg1 ;
-(id)initWithDataContent:(id)arg1 ;
@end

