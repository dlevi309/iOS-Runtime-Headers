/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)userActivity;
-(id)initWithUserActivity:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithRequestInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)speechRequestOptions;
-(AFRequestInfo *)requestInfo;
-(BOOL)isTemporaryDevice;
-(id)initWithSpeechRequestOptions:(id)arg1 ;
@end

