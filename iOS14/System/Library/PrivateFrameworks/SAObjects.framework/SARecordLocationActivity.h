/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SALocation, NSString;

@interface SARecordLocationActivity : SABaseClientBoundCommand

@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * sourceType; 
-(NSString *)sourceType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SALocation *)location;
-(void)setSourceType:(NSString *)arg1 ;
-(void)setLocation:(SALocation *)arg1 ;
@end

