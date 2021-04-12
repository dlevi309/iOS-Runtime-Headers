/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSMutableOrderedSet *)identifiers;
-(void)setIdentifiers:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)calls;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(void)setCalls:(NSMutableDictionary *)arg1 ;
-(void)_trimCache;
-(void)addCall:(id)arg1 ;
@end

