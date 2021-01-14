/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MFMessageHeaders.h>
#import <libobjc.A.dylib/ECMutableMessageHeaders.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface MFMutableMessageHeaders : MFMessageHeaders <ECMutableMessageHeaders> {

	NSMutableDictionary* _headersAdded;
	NSMutableArray* _headersRemoved;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)allHeaderKeys;
-(void)stripInternalHeaders;
-(void)removeHeaderForKey:(id)arg1 ;
-(id)firstHeaderForKey:(id)arg1 ;
-(void)setHeader:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasHeaderForKey:(id)arg1 ;
-(id)mutableCopy;
-(NSString *)description;
-(id)encodedHeaders;
-(void)setAddressList:(id)arg1 forKey:(id)arg2 ;
-(void)setAddressListForSender:(id)arg1 ;
-(void)setAddressListForTo:(id)arg1 ;
-(void)setAddressListForCc:(id)arg1 ;
-(void)setAddressListForBcc:(id)arg1 ;
-(id)headersDictionary;
-(void)setReferences:(id)arg1 ;
-(id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 decoded:(BOOL)arg3 ;
-(id)_copyHeaderValueForKey:(id)arg1 ;
-(id)_headerValueForKey:(id)arg1 ;
-(void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)mergeHeaders:(id)arg1 ;
-(void)setAddressListForReplyTo:(id)arg1 ;
@end

