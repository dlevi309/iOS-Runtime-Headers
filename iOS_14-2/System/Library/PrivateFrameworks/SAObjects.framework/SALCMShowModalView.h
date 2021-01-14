/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAAceView;

@interface SALCMShowModalView : SABaseClientBoundCommand

@property (nonatomic,retain) SAAceView * view; 
+(id)showModalView;
+(id)showModalViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setView:(SAAceView *)arg1 ;
-(SAAceView *)view;
@end

