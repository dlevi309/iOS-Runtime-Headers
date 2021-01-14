/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAClientStateServerBoundCommand.h>

@class NSArray, NSString;

@interface SASetSyncContext : SABaseCommand <SAClientStateServerBoundCommand>

@property (nonatomic,copy) NSArray * objects; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setSyncContext;
+(id)setSyncContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)objects;
-(void)setObjects:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

