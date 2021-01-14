/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/VSAuthenticationToken.h>

@class NSString, NSDate, NSData;

@interface VSOpaqueAuthenticationToken : NSObject <VSAuthenticationToken> {

	NSString* _body;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSDate * expirationDate;                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSString * body;                               //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSData * serializedData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)serializedData;
-(void)setBody:(NSString *)arg1 ;
-(BOOL)isOpaque;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)body;
-(id)init;
-(NSString *)description;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSerializedData:(id)arg1 ;
-(BOOL)isFromUnsupportedProvider;
@end

