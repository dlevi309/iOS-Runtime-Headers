/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURL;

@interface _NSHSTSStorage : NSObject {

	CFHSTSPolicyRef _policy;

}

@property (readonly) CFHSTSPolicyRef _policyRef; 
@property (nonatomic,readonly) NSURL * path; 
+(id)sharedPersistentStore;
-(CFHSTSPolicyRef)_policyRef;
-(BOOL)shouldPromoteHostToHTTPS:(id)arg1 ;
-(id)nonPreloadedHosts;
-(void)resetHSTSForHost:(id)arg1 ;
-(void)resetHSTSHostsSinceDate:(id)arg1 ;
-(id)initPersistentStoreWithURL:(id)arg1 ;
-(NSURL *)path;
-(id)initInMemoryStore;
-(void)dealloc;
@end

