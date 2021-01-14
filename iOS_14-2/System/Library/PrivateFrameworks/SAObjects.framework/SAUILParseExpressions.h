/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SARemoteDevice;

@interface SAUILParseExpressions : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * expressions; 
@property (nonatomic,retain) SARemoteDevice * targetDevice; 
+(id)parseExpressions;
+(id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(SARemoteDevice *)targetDevice;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setTargetDevice:(SARemoteDevice *)arg1 ;
-(NSArray *)expressions;
-(void)setExpressions:(NSArray *)arg1 ;
@end

