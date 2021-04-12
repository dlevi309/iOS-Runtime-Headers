/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/VSAuthenticationToken.h>

@class NSString, NSDate, NSData;

@interface VSOpaqueAuthenticationToken : NSObject <VSAuthenticationToken> {

	NSString* _body;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSDate * expirationDate;                       //@synthesize expirationDate=_expirationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * body;                               //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSData * serializedData; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(BOOL)isOpaque;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
-(NSData *)serializedData;
-(id)initWithSerializedData:(id)arg1 ;
-(BOOL)isFromUnsupportedProvider;
@end

