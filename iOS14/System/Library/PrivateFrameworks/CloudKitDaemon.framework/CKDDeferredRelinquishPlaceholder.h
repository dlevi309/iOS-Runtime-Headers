/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/CKDZoneGatekeeperWaiter.h>

@class NSString;

@interface CKDDeferredRelinquishPlaceholder : NSObject <CKDZoneGatekeeperWaiter> {

	long long _qualityOfService;
	NSString* _underlyingCKShortDescription;

}

@property (nonatomic,readonly) long long qualityOfService;                           //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) NSString * underlyingCKShortDescription;              //@synthesize underlyingCKShortDescription=_underlyingCKShortDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)ckShortDescription;
-(NSString *)description;
-(long long)qualityOfService;
-(NSString *)underlyingCKShortDescription;
-(id)initWithExistingWaiter:(id)arg1 ;
@end

