/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/TKTokenAccessDB.h>

@class NSUserDefaults, NSString;

@interface TKTokenAccessDBBackedByUserDefaults : NSObject <TKTokenAccessDB> {

	NSUserDefaults* _db;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_keyRefForRequest:(id)arg1 ;
-(long long)fetchAccessForRequest:(id)arg1 ;
-(void)storeAccess:(long long)arg1 forRequest:(id)arg2 ;
-(void)clearAllAccessRecords;
@end

