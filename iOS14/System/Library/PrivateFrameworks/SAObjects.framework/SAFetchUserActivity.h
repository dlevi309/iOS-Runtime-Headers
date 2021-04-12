/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAFetchUserActivity : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * internalGUID; 
+(id)fetchUserActivity;
+(id)fetchUserActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
@end

