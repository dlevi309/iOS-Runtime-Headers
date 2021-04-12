/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * desiredAccuracy; 
@property (nonatomic,copy) NSNumber * maxAge; 
@property (nonatomic,copy) NSNumber * searchTimeout; 
+(id)getRequestOrigin;
+(id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)searchTimeout;
-(void)setDesiredAccuracy:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)desiredAccuracy;
-(void)setSearchTimeout:(NSNumber *)arg1 ;
-(NSNumber *)maxAge;
-(BOOL)mutatingCommand;
-(void)setMaxAge:(NSNumber *)arg1 ;
@end

