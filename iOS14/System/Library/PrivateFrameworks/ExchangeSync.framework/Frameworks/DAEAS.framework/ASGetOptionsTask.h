/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASGetOptionsTask : ASTask {

	NSArray* _versionArray;
	NSArray* _commandArray;

}
+(void)__setUsePort:(BOOL)arg1 ;
-(id)_url;
-(id)httpMethod;
-(void)finishWithError:(id)arg1 ;
-(id)requestBody;
-(int)commandCode;
-(BOOL)processContext:(id)arg1 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg1 ;
-(BOOL)shouldStallAfterConnectionLost;
-(BOOL)requiresEASVersionInformaton;
-(void)setVersionArray:(id)arg1 ;
-(void)setCommandArray:(id)arg1 ;
-(id)commandArray;
-(id)versionArray;
@end

