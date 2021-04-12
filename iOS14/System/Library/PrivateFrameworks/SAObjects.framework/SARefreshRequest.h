/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAStartRequest.h>

@class NSData, NSString;

@interface SARefreshRequest : SAStartRequest

@property (nonatomic,copy) NSData * nlResultState; 
@property (nonatomic,copy) NSData * serializedIntent; 
@property (nonatomic,copy) NSString * source; 
+(id)refreshRequest;
+(id)refreshRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setSource:(NSString *)arg1 ;
-(NSData *)nlResultState;
-(NSData *)serializedIntent;
-(void)setNlResultState:(NSData *)arg1 ;
-(void)setSerializedIntent:(NSData *)arg1 ;
-(NSString *)source;
@end

