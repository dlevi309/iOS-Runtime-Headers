/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/GEOKeyBagProtectedDataDidBecomeAvailableObserver.h>

@class NSString;

@interface MSPMapsDefaultsAccessor : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver> {

	BOOL _protectedDataAvailable;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)get:(id)arg1 ;
+(void)synchronize;
+(void)set:(id)arg1 value:(id)arg2 ;
-(id)init;
-(id)_get:(id)arg1 ;
-(void)_synchronize;
-(void)protectedDataDidBecomeAvailable:(id)arg1 ;
-(void)_set:(id)arg1 value:(id)arg2 ;
@end

