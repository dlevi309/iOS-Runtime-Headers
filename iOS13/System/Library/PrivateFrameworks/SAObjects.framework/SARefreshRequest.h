/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)nlResultState;
-(void)setNlResultState:(NSData *)arg1 ;
-(NSData *)serializedIntent;
-(void)setSerializedIntent:(NSData *)arg1 ;
@end

