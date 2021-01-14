/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)classification;
-(void)setClassification:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(NSString *)title;
@end

