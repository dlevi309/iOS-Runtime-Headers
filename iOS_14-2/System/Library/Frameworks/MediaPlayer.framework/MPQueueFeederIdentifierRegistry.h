/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMapTable;

@interface MPQueueFeederIdentifierRegistry : NSObject <NSSecureCoding, NSCopying> {

	NSMutableArray* _identifiers;
	NSMutableArray* _identifierSets;
	NSMapTable* _index;

}

@property (nonatomic,retain) NSMutableArray * identifiers;                 //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * identifierSets;              //@synthesize identifierSets=_identifierSets - In the implementation block
@property (nonatomic,retain) NSMapTable * index;                           //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long count; 
+(BOOL)supportsSecureCoding;
-(NSMapTable *)index;
-(id)itemAtIndex:(long long)arg1 ;
-(NSMutableArray *)identifiers;
-(id)init;
-(long long)indexForItem:(id)arg1 ;
-(id)identifierSetAtIndex:(long long)arg1 ;
-(id)identifierSetForItem:(id)arg1 ;
-(void)replaceItemAndIdentifierSet:(id)arg1 atIndex:(long long)arg2 ;
-(void)applyChanges:(id)arg1 identifierSetLookupBlock:(/*^block*/id)arg2 ;
-(id)itemForIdentifierSet:(id)arg1 ;
-(void)setIndex:(NSMapTable *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(void)setIdentifiers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)identifierSets;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifierSets:(NSMutableArray *)arg1 ;
@end

