/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>

@class NSData, SACFScriptEncryptionParameters, NSString, SACFScriptUrlInformation;

@interface SACFClientFlowScript : SABaseAceObject

@property (nonatomic,copy) NSData * compressedScript; 
@property (nonatomic,retain) SACFScriptEncryptionParameters * encryptionParameters; 
@property (nonatomic,copy) NSString * fileContentType; 
@property (nonatomic,copy) NSString * jsScript; 
@property (nonatomic,copy) NSData * jsScriptChecksum; 
@property (nonatomic,copy) NSString * jsScriptIdentifier; 
@property (assign,nonatomic) BOOL shouldCacheScript; 
@property (assign,nonatomic) BOOL shouldSkipExecution; 
@property (nonatomic,retain) SACFScriptUrlInformation * urlInformation; 
+(id)clientFlowScript;
+(id)clientFlowScriptWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSData *)compressedScript;
-(void)setCompressedScript:(NSData *)arg1 ;
-(SACFScriptEncryptionParameters *)encryptionParameters;
-(void)setEncryptionParameters:(SACFScriptEncryptionParameters *)arg1 ;
-(NSString *)fileContentType;
-(void)setFileContentType:(NSString *)arg1 ;
-(void)setJsScript:(NSString *)arg1 ;
-(NSData *)jsScriptChecksum;
-(void)setJsScriptChecksum:(NSData *)arg1 ;
-(NSString *)jsScriptIdentifier;
-(void)setJsScriptIdentifier:(NSString *)arg1 ;
-(BOOL)shouldCacheScript;
-(void)setShouldCacheScript:(BOOL)arg1 ;
-(BOOL)shouldSkipExecution;
-(void)setShouldSkipExecution:(BOOL)arg1 ;
-(SACFScriptUrlInformation *)urlInformation;
-(void)setUrlInformation:(SACFScriptUrlInformation *)arg1 ;
-(NSString *)jsScript;
@end

