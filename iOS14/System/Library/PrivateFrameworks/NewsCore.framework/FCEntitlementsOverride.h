/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, NSError;

@interface FCEntitlementsOverride : NSObject {

	NSArray* _entitlements;
	NSError* _error;

}

@property (nonatomic,copy) NSArray * entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,copy) NSError * error;                     //@synthesize error=_error - In the implementation block
-(NSArray *)entitlements;
-(void)setEntitlements:(NSArray *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)initWithEntitlements:(id)arg1 error:(id)arg2 ;
@end

