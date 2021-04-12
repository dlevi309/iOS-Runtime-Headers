/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SALocalSearchGetNavigationStatus : SADomainCommand

@property (nonatomic,copy) NSNumber * getRoute; 
+(id)getNavigationStatus;
+(id)getNavigationStatusWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)getRoute;
-(void)setGetRoute:(NSNumber *)arg1 ;
@end

