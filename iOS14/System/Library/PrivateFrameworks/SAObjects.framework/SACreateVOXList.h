/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray;

@interface SACreateVOXList : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * domainName; 
@property (nonatomic,copy) NSArray * introductions; 
@property (nonatomic,copy) NSArray * items; 
@property (assign,nonatomic) long long pageSize; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createVOXList;
+(id)createVOXListWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)domainName;
-(id)groupIdentifier;
-(void)setDomainName:(NSString *)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)items;
-(long long)pageSize;
-(void)setPageSize:(long long)arg1 ;
-(NSArray *)introductions;
-(void)setIntroductions:(NSArray *)arg1 ;
@end

