/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAActivityObject;

@interface SARecordActivity : SABaseClientBoundCommand

@property (nonatomic,retain) SAActivityObject * activity; 
+(id)recordActivity;
+(id)recordActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAActivityObject *)activity;
-(void)setActivity:(SAActivityObject *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

