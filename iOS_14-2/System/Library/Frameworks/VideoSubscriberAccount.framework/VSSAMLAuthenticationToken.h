/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/VSAuthenticationToken.h>

@class NSDate, NSString, NSData;

@interface VSSAMLAuthenticationToken : NSObject <VSAuthenticationToken> {

	NSData* _serializedData;
	NSDate* _simulatedExpirationDate;

}

@property (nonatomic,copy) NSData * serializedData;                         //@synthesize serializedData=_serializedData - In the implementation block
@property (nonatomic,retain) NSDate * simulatedExpirationDate;              //@synthesize simulatedExpirationDate=_simulatedExpirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * body; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSData *)serializedData;
-(void)setBody:(NSString *)arg1 ;
-(BOOL)isOpaque;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)body;
-(void)setSerializedData:(NSData *)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSerializedData:(id)arg1 ;
-(void)setSimulatedExpirationDate:(NSDate *)arg1 ;
-(NSDate *)simulatedExpirationDate;
-(BOOL)isFromUnsupportedProvider;
@end

