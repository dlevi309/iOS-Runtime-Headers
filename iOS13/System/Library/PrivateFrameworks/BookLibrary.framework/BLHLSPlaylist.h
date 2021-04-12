/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <libobjc.A.dylib/BLM3U8ParserDelegate.h>

@class NSArray, BLHLSPlaylistState, NSMutableSet, NSSet, NSString;

@interface BLHLSPlaylist : NSObject <BLM3U8ParserDelegate> {

	BOOL _independentSegments;
	NSArray* _groups;
	NSArray* _streamInfs;
	NSArray* _segments;
	BLHLSPlaylistState* _state;
	NSMutableSet* _uniqueKeys;
	NSArray* _requestedBitrates;

}

@property (nonatomic,retain) NSArray * groups;                         //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSArray * streamInfs;                     //@synthesize streamInfs=_streamInfs - In the implementation block
@property (nonatomic,retain) NSArray * segments;                       //@synthesize segments=_segments - In the implementation block
@property (assign,nonatomic) BOOL independentSegments;                 //@synthesize independentSegments=_independentSegments - In the implementation block
@property (nonatomic,retain) BLHLSPlaylistState * state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableSet * uniqueKeys;                //@synthesize uniqueKeys=_uniqueKeys - In the implementation block
@property (nonatomic,retain) NSArray * requestedBitrates;              //@synthesize requestedBitrates=_requestedBitrates - In the implementation block
@property (nonatomic,readonly) NSSet * keys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_rewritePlaylistWithParser:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id*)arg4 ;
+(id)_playlistUsingParser:(id)arg1 error:(id*)arg2 ;
+(BOOL)rewritePlaylistData:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id*)arg4 ;
+(BOOL)rewritePlaylistURL:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id*)arg4 ;
+(id)playlistParsingData:(id)arg1 error:(id*)arg2 ;
+(id)playlistParsingURL:(id)arg1 error:(id*)arg2 ;
-(NSString *)description;
-(NSSet *)keys;
-(BLHLSPlaylistState *)state;
-(void)setState:(BLHLSPlaylistState *)arg1 ;
-(NSArray *)groups;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(void)setGroups:(NSArray *)arg1 ;
-(BOOL)independentSegments;
-(NSArray *)streamInfs;
-(id)initWithRequestedBitrates:(id)arg1 ;
-(BOOL)_parseUsingParser:(id)arg1 error:(id*)arg2 ;
-(void)setStreamInfs:(NSArray *)arg1 ;
-(void)setIndependentSegments:(BOOL)arg1 ;
-(NSArray *)requestedBitrates;
-(void)parser:(id)arg1 lineIsURL:(id)arg2 ;
-(void)parser:(id)arg1 lineIsTag:(id)arg2 value:(id)arg3 attributeList:(id)arg4 ;
-(void)parser:(id)arg1 lineIsComment:(id)arg2 ;
-(BOOL)parserShouldCollectLine:(id)arg1 ;
-(NSMutableSet *)uniqueKeys;
-(void)setUniqueKeys:(NSMutableSet *)arg1 ;
-(void)setRequestedBitrates:(NSArray *)arg1 ;
@end

