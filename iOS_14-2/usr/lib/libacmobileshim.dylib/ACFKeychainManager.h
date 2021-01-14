/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libobjc.A.dylib/ACFKeychainManagerProtocol.h>

@class NSString;

@interface ACFKeychainManager : NSObject <ACFKeychainManagerProtocol> {

	NSString* _usedAccessGroup;

}

@property (nonatomic,retain) NSString * usedAccessGroup;                  //@synthesize usedAccessGroup=_usedAccessGroup - In the implementation block
@property (nonatomic,readonly) NSString * obtainAccessGroup; 
@property (nonatomic,readonly) NSString * sharedAccessGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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

