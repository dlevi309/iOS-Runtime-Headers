/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString;


@protocol ACFKeychainManagerProtocol <NSObject>
@property (nonatomic,readonly) NSString * usedAccessGroup; 
@property (nonatomic,readonly) NSString * obtainAccessGroup; 
@property (nonatomic,readonly) NSString * sharedAccessGroup; 
@required
-(NSString *)sharedAccessGroup;
-(NSString *)obtainAccessGroup;
-(void)dumpResults:(id)arg1 printAttributes:(BOOL)arg2;
-(id)searchItemWithInfo:(id)arg1;
-(int)storeItemWithInfo:(id)arg1 share:(BOOL)arg2 result:(id*)arg3;
-(BOOL)removeItemWithInfo:(id)arg1;
-(NSString *)usedAccessGroup;

@end

