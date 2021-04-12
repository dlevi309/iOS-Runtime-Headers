/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SACFMMessageTextParseChunk : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * chunkType; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageTextParseChunk;
+(id)messageTextParseChunkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)chunkType;
-(void)setChunkType:(NSString *)arg1 ;
@end

