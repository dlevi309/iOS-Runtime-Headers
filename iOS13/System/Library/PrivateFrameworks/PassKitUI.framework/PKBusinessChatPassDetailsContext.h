/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/PKBusinessChatContext.h>

@class PKPass, NSString;

@interface PKBusinessChatPassDetailsContext : NSObject <PKBusinessChatContext> {

	PKPass* _pass;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)requiresAuthorization;
-(id)initWithPass:(id)arg1 ;
-(id)businessIdentifier;
-(id)intentParameters;
-(id)groupParameters;
@end

