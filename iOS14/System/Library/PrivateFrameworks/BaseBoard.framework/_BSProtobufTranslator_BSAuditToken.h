/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSProtobufSerializable.h>

@class NSData, NSString;

@interface _BSProtobufTranslator_BSAuditToken : NSObject <BSProtobufSerializable> {

	NSData* _tokenData;
	NSString* _bundleID;

}

@property (retain) NSData * tokenData;                              //@synthesize tokenData=_tokenData - In the implementation block
@property (retain) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufSchema;
-(void)setBundleID:(NSString *)arg1 ;
-(NSData *)tokenData;
-(id)didFinishProtobufDecodingWithError:(out id*)arg1 ;
-(NSString *)bundleID;
-(id)initProtobufTranslatorForObject:(id)arg1 ;
-(void)setTokenData:(NSData *)arg1 ;
@end

