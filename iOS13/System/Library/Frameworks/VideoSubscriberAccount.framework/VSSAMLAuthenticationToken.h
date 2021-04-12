/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * body; 
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
-(void)setSerializedData:(NSData *)arg1 ;
-(id)initWithSerializedData:(id)arg1 ;
-(void)setSimulatedExpirationDate:(NSDate *)arg1 ;
-(NSDate *)simulatedExpirationDate;
-(BOOL)isFromUnsupportedProvider;
@end

