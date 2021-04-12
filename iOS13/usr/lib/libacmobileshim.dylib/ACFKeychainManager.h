/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libobjc.A.dylib/ACFKeychainManagerProtocol.h>

@class NSString;

@interface ACFKeychainManager : NSObject <ACFKeychainManagerProtocol> {

	NSString* _usedAccessGroup;

}

@property (nonatomic,retain) NSString * usedAccessGroup;                  //@synthesize usedAccessGroup=_usedAccessGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * obtainAccessGroup; 
@property (nonatomic,readonly) NSString * sharedAccessGroup; 
-(NSString *)sharedAccessGroup;
-(id)universalAccessGroup;
-(int)secAddItemWithAttributes:(id)arg1 result:(id*)arg2 ;
-(NSString *)obtainAccessGroup;
-(void)setUsedAccessGroup:(NSString *)arg1 ;
-(void)dumpResults:(id)arg1 printAttributes:(BOOL)arg2 ;
-(id)searchItemWithInfo:(id)arg1 ;
-(void)dumpResults:(id)arg1 ;
-(int)secItemCopyMatchingWithAttributes:(id)arg1 result:(id*)arg2 ;
-(int)storeItemWithInfo:(id)arg1 share:(BOOL)arg2 result:(id*)arg3 ;
-(BOOL)removeItemWithInfo:(id)arg1 ;
-(NSString *)usedAccessGroup;
@end

