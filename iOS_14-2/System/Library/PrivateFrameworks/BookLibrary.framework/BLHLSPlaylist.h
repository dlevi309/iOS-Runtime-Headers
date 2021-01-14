/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <libobjc.A.dylib/BLM3U8ParserDelegate.h>

@class NSArray, BLHLSPlaylistState, NSMutableSet, NSSet, NSString;

@interface BLHLSPlaylist : NSObject <BLM3U8ParserDelegate> {

	BOOL _independentSegments;
	BOOL _ignoreSegments;
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
@property (assign,nonatomic) BOOL ignoreSegments;                      //@synthesize ignoreSegments=_ignoreSegments - In the implementation block
@property (nonatomic,retain) BLHLSPlaylistState * state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableSet * uniqueKeys;                //@synthesize uniqueKeys=_uniqueKeys - In the implementation block
@property (nonatomic,retain) NSArray * requestedBitrates;              //@synthesize requestedBitrates=_requestedBitrates - In the implementation block
@property (nonatomic,readonly) NSSet * keys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_rewritePlaylistWithParser:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id*)arg4 ;
+(id)playlistParsingData:(id)arg1 error:(id*)arg2 ;
+(BOOL)rewritePlaylistData:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id*)arg4 ;
+(BOOL)rewritePlaylistURL:(id)arg1 toURL:(id)arg2 requestedBitrates:(id)arg3 error:(id*)arg4 ;
+(id)playlistParsingURL:(id)arg1 error:(id*)arg2 ;
+(id)_playlistUsingParser:(id)arg1 ignoreSegments:(BOOL)arg2 error:(id*)arg3 ;
+(id)playlistParsingURL:(id)arg1 ignoreSegments:(BOOL)arg2 error:(id*)arg3 ;
-(NSSet *)keys;
-(void)setGroups:(NSArray *)arg1 ;
-(NSArray *)groups;
-(NSArray *)streamInfs;
-(void)setSegments:(NSArray *)arg1 ;
-(void)parser:(id)arg1 lineIsTag:(id)arg2 value:(id)arg3 attributeList:(id)arg4 ;
-(BOOL)parserShouldCollectLine:(id)arg1 ;
-(void)parser:(id)arg1 lineIsComment:(id)arg2 ;
-(void)parser:(id)arg1 lineIsURL:(id)arg2 ;
-(NSString *)description;
-(NSMutableSet *)uniqueKeys;
-(void)setStreamInfs:(NSArray *)arg1 ;
-(BOOL)independentSegments;
-(id)initWithRequestedBitrates:(id)arg1 ;
-(BOOL)_parseUsingParser:(id)arg1 error:(id*)arg2 ;
-(void)setIndependentSegments:(BOOL)arg1 ;
-(NSArray *)requestedBitrates;
-(NSArray *)segments;
-(void)setUniqueKeys:(NSMutableSet *)arg1 ;
-(void)setRequestedBitrates:(NSArray *)arg1 ;
-(void)setState:(BLHLSPlaylistState *)arg1 ;
-(BLHLSPlaylistState *)state;
-(void)setIgnoreSegments:(BOOL)arg1 ;
-(BOOL)ignoreSegments;
@end

