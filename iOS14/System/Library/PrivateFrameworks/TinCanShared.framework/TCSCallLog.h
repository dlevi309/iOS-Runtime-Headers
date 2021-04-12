/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
*/


#import <TinCanShared/TinCanShared-Structs.h>
@class NSMutableDictionary, NSMutableOrderedSet;

@interface TCSCallLog : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _calls;
	NSMutableOrderedSet* _identifiers;

}

@property (nonatomic,retain) NSMutableDictionary * calls;                    //@synthesize calls=_calls - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(NSMutableOrderedSet *)identifiers;
-(id)init;
-(void)setIdentifiers:(NSMutableOrderedSet *)arg1 ;
-(void)setCalls:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)calls;
-(void)_trimCache;
-(void)addCall:(id)arg1 ;
@end

