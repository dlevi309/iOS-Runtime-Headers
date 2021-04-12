/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface PKBarcode : NSObject <NSSecureCoding> {

	BOOL _shouldRemoveQuietZone;
	NSData* _messageData;
	NSDictionary* _options;
	long long _format;
	NSString* _altText;

}

@property (nonatomic,copy) NSData * messageData;                      //@synthesize messageData=_messageData - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * altText;                        //@synthesize altText=_altText - In the implementation block
@property (assign,nonatomic) long long format;                        //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL isTall; 
@property (assign,nonatomic) BOOL shouldRemoveQuietZone;              //@synthesize shouldRemoveQuietZone=_shouldRemoveQuietZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)altText;
-(void)setFormat:(long long)arg1 ;
-(void)setAltText:(NSString *)arg1 ;
-(long long)format;
-(BOOL)isTall;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)initWithPassDictionary:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldRemoveQuietZone;
-(void)setShouldRemoveQuietZone:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setMessageData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)messageData;
@end

