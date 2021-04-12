/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SARemoteDevice;

@interface SAUILParseExpressions : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * expressions; 
@property (nonatomic,retain) SARemoteDevice * targetDevice; 
+(id)parseExpressions;
+(id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTargetDevice:(SARemoteDevice *)arg1 ;
-(SARemoteDevice *)targetDevice;
-(id)encodedClassName;
-(NSArray *)expressions;
-(BOOL)requiresResponse;
-(void)setExpressions:(NSArray *)arg1 ;
@end

