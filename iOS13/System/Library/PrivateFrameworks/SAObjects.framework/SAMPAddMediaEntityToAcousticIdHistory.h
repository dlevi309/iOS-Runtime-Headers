/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)adamId;
-(void)setAdamId:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)affiliateId;
-(void)setAffiliateId:(NSString *)arg1 ;
@end

