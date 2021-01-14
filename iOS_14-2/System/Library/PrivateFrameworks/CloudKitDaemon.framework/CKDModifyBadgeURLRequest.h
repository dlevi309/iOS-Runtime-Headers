/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDModifyBadgeURLRequest : CKDURLRequest {

	unsigned long long _badgeValue;

}

@property (nonatomic,readonly) unsigned long long badgeValue;              //@synthesize badgeValue=_badgeValue - In the implementation block
-(unsigned long long)badgeValue;
-(id)generateRequestOperations;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)initWithOperation:(id)arg1 badgeValue:(unsigned long long)arg2 ;
@end

