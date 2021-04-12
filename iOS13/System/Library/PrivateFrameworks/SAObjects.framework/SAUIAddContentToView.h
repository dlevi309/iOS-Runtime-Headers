/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIAddContentToView : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * targetViewId; 
+(id)addContentToView;
+(id)addContentToViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)status;
-(id)groupIdentifier;
-(void)setStatus:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)targetViewId;
-(void)setTargetViewId:(NSString *)arg1 ;
@end

