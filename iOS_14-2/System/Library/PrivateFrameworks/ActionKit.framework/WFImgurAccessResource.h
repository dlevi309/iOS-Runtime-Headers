/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/WFAccountAccessResource.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFImgurUploadAction, NSString;

@interface WFImgurAccessResource : WFAccountAccessResource <WFActionEventObserver> {

	BOOL _usesAccount;
	WFImgurUploadAction* _action;

}

@property (assign,nonatomic,__weak) WFImgurUploadAction * action;              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL usesAccount;                                 //@synthesize usesAccount=_usesAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)accountClass;
-(WFImgurUploadAction *)action;
-(void)setAction:(WFImgurUploadAction *)arg1 ;
-(unsigned long long)globalLevelStatus;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)setUsesAccount:(BOOL)arg1 ;
-(BOOL)usesAccount;
@end

