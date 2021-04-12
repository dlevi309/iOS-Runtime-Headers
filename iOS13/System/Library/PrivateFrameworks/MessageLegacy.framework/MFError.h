/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/

#import <Foundation/NSError.h>

@class NSMutableDictionary;

@interface MFError : NSError {

	NSMutableDictionary* _moreUserInfo;

}
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 userInfo:(id)arg5 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 ;
+(id)errorWithException:(id)arg1 ;
-(id)localizedDescription;
-(id)userInfo;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(id)recoveryAttempter;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)setLocalizedDescription:(id)arg1 ;
-(void)setShortDescription:(id)arg1 ;
-(id)mf_moreInfo;
-(id)mf_shortDescription;
-(void)setMoreInfo:(id)arg1 ;
-(void)useGenericDescription:(id)arg1 ;
@end

