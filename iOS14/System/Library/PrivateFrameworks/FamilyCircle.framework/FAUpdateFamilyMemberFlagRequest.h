/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber, NSString;

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest {

	NSNumber* _dsid;
	NSString* _flag;
	BOOL _enabled;

}
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithFamilyMemberDSID:(id)arg1 flag:(id)arg2 enabled:(BOOL)arg3 ;
@end

