/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMapTable *)index;
-(void)setIndex:(NSMapTable *)arg1 ;
-(NSMutableArray *)identifiers;
-(void)setIdentifiers:(NSMutableArray *)arg1 ;
-(id)itemAtIndex:(long long)arg1 ;
-(NSMutableArray *)identifierSets;
-(void)setIdentifierSets:(NSMutableArray *)arg1 ;
-(void)replaceItemAndIdentifierSet:(id)arg1 atIndex:(long long)arg2 ;
-(void)applyChanges:(id)arg1 identifierSetLookupBlock:(/*^block*/id)arg2 ;
-(long long)indexForItem:(id)arg1 ;
-(id)identifierSetAtIndex:(long long)arg1 ;
-(id)identifierSetForItem:(id)arg1 ;
-(id)itemForIdentifierSet:(id)arg1 ;
@end

