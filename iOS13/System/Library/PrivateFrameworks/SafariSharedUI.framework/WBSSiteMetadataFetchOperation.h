/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <Foundation/NSOperation.h>

@class WBSSiteMetadataRequest;

@interface WBSSiteMetadataFetchOperation : NSOperation {

	WBSSiteMetadataRequest* _request;
	long long _status;

}

@property (setter=_setStatus:,getter=_status) long long status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) WBSSiteMetadataRequest * request;              //@synthesize request=_request - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(long long)_status;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(WBSSiteMetadataRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)_setStatus:(long long)arg1 ;
@end

