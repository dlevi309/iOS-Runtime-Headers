/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/ECMessageHeaders.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface MFMessageHeaders : NSObject <ECMessageHeaders, NSCopying> {

	NSData* _data;
	unsigned _preferredEncoding;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned preferredEncoding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)addressListFromEncodedString:(id)arg1 ;
+(id)uniqueHeaderKeyStringForString:(id)arg1 ;
+(BOOL)isStructuredHeaderKey:(id)arg1 ;
+(id)basicHeaders;
+(BOOL)shouldDecodeHeaderForKey:(id)arg1 ;
+(id)copyAddressListFromEncodedData:(id)arg1 encoding:(unsigned)arg2 ;
+(id)encodedDataForAddressList:(id)arg1 splittingAtLength:(unsigned long long)arg2 firstLineBuffer:(unsigned long long)arg3 ;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopy;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(id)references;
-(id)headersDictionary;
-(id)copyAddressListForResentFrom;
-(id)copyAddressListForTo;
-(id)copyAddressListForCc;
-(id)firstHeaderForKey:(id)arg1 ;
-(void)appendHeaderData:(id)arg1 andRecipients:(id)arg2 ;
-(id)firstSenderAddress;
-(unsigned)preferredEncoding;
-(id)listUnsubscribeCommands;
-(BOOL)hasHeaderForKey:(id)arg1 ;
-(id)headersForKey:(id)arg1 ;
-(id)copyAddressListForSender;
-(id)copyAddressListForBcc;
-(id)copyFirstStringValueForKey:(id)arg1 ;
-(id)copyHeadersForKey:(id)arg1 ;
-(id)encodedHeaders;
-(id)initWithHeaderData:(id)arg1 encoding:(unsigned)arg2 ;
-(id)_capitalizedKeyForKey:(id)arg1 ;
-(id)copyAddressListForReplyTo;
-(id)allHeaderKeys;
-(id)copyFirstHeaderForKey:(id)arg1 ;
-(id)headerData;
-(id)_decodeHeaderKeysFromData:(id)arg1 ;
-(unsigned)_contentTypeEncoding;
-(void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2 ;
-(id)copyFirstNonDecodedHeaderForKey:(id)arg1 ;
-(id)copyDecodedStringFromHeaderData:(id)arg1 withRange:(NSRange)arg2 ;
-(id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 decoded:(BOOL)arg3 ;
-(id)_copyHeaderValueForKey:(id)arg1 ;
-(id)_copyAddressListForKey:(id)arg1 ;
-(id)_commaSeparatedValuesForKey:(id)arg1 includeAngleBracket:(BOOL)arg2 ;
-(id)_headerValueForKey:(id)arg1 offset:(unsigned long long*)arg2 ;
-(id)firstAddressForKey:(id)arg1 ;
-(id)initWithASCIIHeaderString:(id)arg1 ;
-(BOOL)_isStructuredHeaderKey:(id)arg1 ;
-(id)_headerValueForKey:(id)arg1 ;
-(BOOL)messageIsFromEntourage;
@end

