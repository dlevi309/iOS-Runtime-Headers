/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class ASCLockupRequest, ASCLockup, NSError;

@interface _ASCLockupResponse : NSObject {

	ASCLockupRequest* _request;
	ASCLockup* _lockup;
	NSError* _error;

}

@property (nonatomic,copy,readonly) ASCLockupRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) ASCLockup * lockup;                      //@synthesize lockup=_lockup - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                         //@synthesize error=_error - In the implementation block
-(ASCLockup *)lockup;
-(ASCLockupRequest *)request;
-(NSError *)error;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRequest:(id)arg1 lockup:(id)arg2 error:(id)arg3 ;
@end

