/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSSearchableIndex.h>

@class NSString, CSIndexConnection;

@interface CSPrivateSearchableIndex : CSSearchableIndex {

	BOOL _attemptedIndexPathResolution;
	NSString* _resolvedIndexPath;
	NSString* _indexPath;
	CSIndexConnection* _savedConnection;

}

@property (assign) BOOL attemptedIndexPathResolution;                          //@synthesize attemptedIndexPathResolution=_attemptedIndexPathResolution - In the implementation block
@property (nonatomic,retain) NSString * resolvedIndexPath;                     //@synthesize resolvedIndexPath=_resolvedIndexPath - In the implementation block
@property (nonatomic,retain) NSString * indexPath;                             //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) CSIndexConnection * savedConnection;              //@synthesize savedConnection=_savedConnection - In the implementation block
+(id)defaultSearchableIndex;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(NSString *)indexPath;
-(id)connection;
-(void)setIndexPath:(NSString *)arg1 ;
-(id)xpc_dictionary_for_command:(const char*)arg1 requiresInitialization:(BOOL)arg2 ;
-(void)setAttemptedIndexPathResolution:(BOOL)arg1 ;
-(NSString *)resolvedIndexPath;
-(void)setSavedConnection:(CSIndexConnection *)arg1 ;
-(BOOL)attemptedIndexPathResolution;
-(void)setResolvedIndexPath:(NSString *)arg1 ;
-(CSIndexConnection *)savedConnection;
@end

