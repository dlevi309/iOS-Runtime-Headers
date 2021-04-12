/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

