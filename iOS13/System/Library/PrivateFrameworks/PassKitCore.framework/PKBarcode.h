/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding> {

	NSData* _messageData;
	NSDictionary* _options;
	long long _format;
	NSString* _altText;

}

@property (nonatomic,copy) NSData * messageData;                //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * altText;                  //@synthesize altText=_altText - In the implementation block
@property (assign,nonatomic) long long format;                  //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL isTall; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDictionary *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(long long)format;
-(void)setFormat:(long long)arg1 ;
-(NSString *)altText;
-(void)setAltText:(NSString *)arg1 ;
-(NSData *)messageData;
-(void)setMessageData:(NSData *)arg1 ;
-(id)initWithPassDictionary:(id)arg1 bundle:(id)arg2 ;
-(BOOL)isTall;
@end

