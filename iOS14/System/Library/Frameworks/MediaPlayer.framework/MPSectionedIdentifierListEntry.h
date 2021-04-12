/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/_MPSectionedIdentifierListEncodableNextEntriesProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationResult.h>

@class NSMutableArray, MPSectionedIdentifierListEntryPositionKey, NSString, NSArray;

@interface MPSectionedIdentifierListEntry : NSObject <_MPSectionedIdentifierListEncodableNextEntriesProviding, NSSecureCoding, MPSectionedIdentifierListEnumerationResult> {

	NSMutableArray* _nextEntries;
	BOOL _dataSourceRemoved;
	MPSectionedIdentifierListEntryPositionKey* _positionKey;
	NSString* _sectionIdentifier;
	NSString* _hostedSectionIdentifier;
	MPSectionedIdentifierListEntry* _previousEntry;
	long long _branchDepth;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MPSectionedIdentifierListEntryPositionKey * positionKey;              //@synthesize positionKey=_positionKey - In the implementation block
@property (nonatomic,readonly) NSString * sectionIdentifier;                                         //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostedSectionIdentifier;                                       //@synthesize hostedSectionIdentifier=_hostedSectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * nextEntries;                                                //@synthesize nextEntries=_nextEntries - In the implementation block
@property (assign,nonatomic,__weak) MPSectionedIdentifierListEntry * previousEntry;                  //@synthesize previousEntry=_previousEntry - In the implementation block
@property (assign,nonatomic) long long branchDepth;                                                  //@synthesize branchDepth=_branchDepth - In the implementation block
@property (getter=isDataSourceRemoved,nonatomic,readonly) BOOL dataSourceRemoved;                    //@synthesize dataSourceRemoved=_dataSourceRemoved - In the implementation block
@property (nonatomic,readonly) long long entryType; 
+(BOOL)supportsSecureCoding;
-(NSString *)sectionIdentifier;
-(id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2 ;
-(void)addBranch:(id)arg1 forceBranchDepthIncrease:(BOOL)arg2 ;
-(void)addNextEntry:(id)arg1 ;
-(void)prepareForDealloc;
-(void)setDataSourceRemoved;
-(BOOL)isDataSourceRemoved;
-(NSArray *)nextEntries;
-(MPSectionedIdentifierListEntryPositionKey *)positionKey;
-(void)setBranchDepth:(long long)arg1 ;
-(NSString *)hostedSectionIdentifier;
-(void)setHostedSectionIdentifier:(NSString *)arg1 ;
-(void)setPreviousEntry:(MPSectionedIdentifierListEntry *)arg1 ;
-(id)encodableNextEntriesWithExclusiveAccessToken:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)entryType;
-(id)itemResult;
-(long long)branchDepth;
-(id)trackingEntryResult;
-(MPSectionedIdentifierListEntry *)previousEntry;
@end

