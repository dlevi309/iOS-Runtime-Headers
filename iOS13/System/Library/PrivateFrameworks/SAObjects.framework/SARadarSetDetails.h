/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SARadarSetDetails : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * classification; 
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * title; 
+(id)setDetails;
+(id)setDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)description;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(NSString *)classification;
-(id)encodedClassName;
-(void)setClassification:(NSString *)arg1 ;
-(BOOL)requiresResponse;
@end

