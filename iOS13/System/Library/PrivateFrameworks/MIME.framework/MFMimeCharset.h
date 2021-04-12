/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ECMIMECharset.h>

@class NSString;

@interface MFMimeCharset : NSObject <NSSecureCoding, ECMIMECharset> {

	unsigned _encoding;
	NSString* _primaryLanguage;
	NSString* _charsetName;
	unsigned _coversLargeUnicodeSubset : 1;
	unsigned _useBase64InHeaders : 1;
	unsigned _canBeUsedForOutgoingMessages : 1;

}

@property (nonatomic,readonly) BOOL useBase64InHeaders; 
@property (nonatomic,readonly) unsigned cfStringEncoding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long encoding; 
@property (nonatomic,copy,readonly) NSString * charsetName; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) BOOL canBeUsedForOutgoingMessages; 
+(BOOL)supportsSecureCoding;
+(id)charsetForEncoding:(unsigned)arg1 ;
+(id)preferredMimeCharset;
+(id)allMimeCharsets:(BOOL)arg1 ;
+(id)allMimeCharsets;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)primaryLanguage;
-(NSString *)displayName;
-(unsigned long long)encoding;
-(void)_setPrimaryLanguage:(id)arg1 ;
-(id)initWithEncoding:(unsigned)arg1 ;
-(unsigned)cfStringEncoding;
-(NSString *)charsetName;
-(BOOL)canBeUsedForOutgoingMessages;
-(BOOL)coversLargeUnicodeSubset;
-(BOOL)useBase64InHeaders;
@end

