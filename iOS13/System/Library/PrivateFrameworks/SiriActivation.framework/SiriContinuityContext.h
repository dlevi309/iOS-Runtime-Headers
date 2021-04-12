/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriContext.h>

@class NSNumber, AFRequestInfo, NSDictionary;

@interface SiriContinuityContext : SiriContext {

	NSNumber* _isTemporaryDevice;
	AFRequestInfo* _requestInfo;
	NSDictionary* _userActivity;

}

@property (nonatomic,readonly) AFRequestInfo * requestInfo;              //@synthesize requestInfo=_requestInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * userActivity;              //@synthesize userActivity=_userActivity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)userActivity;
-(AFRequestInfo *)requestInfo;
-(id)initWithRequestInfo:(id)arg1 ;
-(id)initWithUserActivity:(id)arg1 ;
-(id)speechRequestOptions;
-(id)initWithSpeechRequestOptions:(id)arg1 ;
-(BOOL)isTemporaryDevice;
@end

