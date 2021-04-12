/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, NSError;

@interface FCEntitlementsOverride : NSObject {

	NSArray* _entitlements;
	NSError* _error;

}

@property (nonatomic,copy) NSArray * entitlements;              //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,copy) NSError * error;                     //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSArray *)entitlements;
-(void)setEntitlements:(NSArray *)arg1 ;
-(id)initWithEntitlements:(id)arg1 error:(id)arg2 ;
@end

