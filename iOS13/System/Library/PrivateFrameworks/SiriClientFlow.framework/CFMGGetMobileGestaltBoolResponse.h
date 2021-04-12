/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
*/

#import <SAObjects/SABaseCommand.h>
#import <libobjc.A.dylib/SAServerBoundCommand.h>

@class NSString;

@interface CFMGGetMobileGestaltBoolResponse : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) BOOL value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getMobileGestaltBoolResponse;
+(id)getMobileGestaltBoolResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end

