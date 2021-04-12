/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@interface PFQOSMeter : NSObject {

	AQ _counts[4];
	AQ _total;

}
-(id)init;
-(id)description;
-(BOOL)log:(long long)arg1 ;
-(void)recordQOS;
@end

