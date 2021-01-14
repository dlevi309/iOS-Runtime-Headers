/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMPAddMediaEntityToAcousticIdHistory : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * adamId; 
@property (nonatomic,copy) NSString * affiliateId; 
+(id)addMediaEntityToAcousticIdHistory;
+(id)addMediaEntityToAcousticIdHistoryWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)affiliateId;
-(void)setAffiliateId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
@end

