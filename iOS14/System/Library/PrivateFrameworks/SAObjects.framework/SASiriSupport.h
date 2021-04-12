/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SASiriSupport : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * authToken; 
@property (nonatomic,copy) NSArray * endpoints; 
@property (nonatomic,copy) NSArray * useCases; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriSupport;
+(id)siriSupportWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setEndpoints:(NSArray *)arg1 ;
-(NSArray *)endpoints;
-(NSString *)authToken;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)useCases;
-(void)setUseCases:(NSArray *)arg1 ;
@end

