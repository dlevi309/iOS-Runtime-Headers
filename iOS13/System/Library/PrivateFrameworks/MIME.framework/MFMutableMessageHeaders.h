/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(id)mutableCopy;
-(id)headersDictionary;
-(void)setReferences:(id)arg1 ;
-(void)stripInternalHeaders;
-(void)removeHeaderForKey:(id)arg1 ;
-(id)firstHeaderForKey:(id)arg1 ;
-(void)setHeader:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasHeaderForKey:(id)arg1 ;
-(id)encodedHeaders;
-(void)setAddressListForSender:(id)arg1 ;
-(void)setAddressListForTo:(id)arg1 ;
-(void)setAddressListForCc:(id)arg1 ;
-(void)setAddressListForBcc:(id)arg1 ;
-(id)allHeaderKeys;
-(id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 decoded:(BOOL)arg3 ;
-(id)_copyHeaderValueForKey:(id)arg1 ;
-(id)_headerValueForKey:(id)arg1 ;
-(void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)setAddressList:(id)arg1 forKey:(id)arg2 ;
-(void)mergeHeaders:(id)arg1 ;
-(void)setAddressListForReplyTo:(id)arg1 ;
@end

