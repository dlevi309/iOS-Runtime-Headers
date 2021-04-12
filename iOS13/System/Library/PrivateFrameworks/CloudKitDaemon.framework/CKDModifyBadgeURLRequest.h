/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDModifyBadgeURLRequest : CKDURLRequest {

	unsigned long long _badgeValue;

}

@property (nonatomic,readonly) unsigned long long badgeValue;              //@synthesize badgeValue=_badgeValue - In the implementation block
-(int)operationType;
-(unsigned long long)badgeValue;
-(id)initWithBadgeValue:(unsigned long long)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
@end

