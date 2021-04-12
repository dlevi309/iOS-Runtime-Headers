/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIAddContentToView : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * targetViewId; 
+(id)addContentToViewWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)addContentToView;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setStatus:(NSString *)arg1 ;
-(NSString *)targetViewId;
-(void)setTargetViewId:(NSString *)arg1 ;
-(NSString *)status;
@end

