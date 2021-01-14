/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SACalendarSource, NSString;

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SACalendarSource * aceCalendarSource; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultSourceGetCompleted;
+(id)defaultSourceGetCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)defaultSourceGetCompletedWithAceCalendarSource:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setAceCalendarSource:(SACalendarSource *)arg1 ;
-(id)initWithAceCalendarSource:(id)arg1 ;
-(SACalendarSource *)aceCalendarSource;
@end

