/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSSet, NSArray;

@interface _EMSearchableIndexPendingRemovals : NSObject <NSCopying> {

	NSMutableDictionary* _reasonsByIdentifier;
	NSSet* _purgeReasons;
	NSSet* _exclusionReasons;

}

@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * identifiers; 
@property (nonatomic,readonly) NSArray * purgedIdentifiers; 
@property (nonatomic,readonly) NSArray * deletedIdentifiers; 
@property (nonatomic,copy) NSSet * purgeReasons;                          //@synthesize purgeReasons=_purgeReasons - In the implementation block
@property (nonatomic,copy) NSSet * exclusionReasons;                      //@synthesize exclusionReasons=_exclusionReasons - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(NSArray *)identifiers;
-(NSSet *)purgeReasons;
-(NSSet *)exclusionReasons;
-(id)initWithPurgeReasons:(id)arg1 exclusionReasons:(id)arg2 ;
-(NSArray *)purgedIdentifiers;
-(void)removeAllIdentifiers;
-(void)addIdentifiers:(id)arg1 withReasons:(id)arg2 ;
-(id)_identifiersPassingReasonsTest:(/*^block*/id)arg1 ;
-(NSArray *)deletedIdentifiers;
-(void)removeIdentifier:(id)arg1 ;
-(void)setPurgeReasons:(NSSet *)arg1 ;
-(void)setExclusionReasons:(NSSet *)arg1 ;
@end

