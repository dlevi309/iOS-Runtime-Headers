/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSSearchableIndex.h>

@class NSString, CSIndexConnection;

@interface CSPrivateSearchableIndex : CSSearchableIndex {

	BOOL _attemptedIndexPathResolution;
	int _resolvedIndexPathErrorCode;
	NSString* _resolvedIndexPath;
	NSString* _indexPath;
	CSIndexConnection* _savedConnection;

}

@property (assign) BOOL attemptedIndexPathResolution;                          //@synthesize attemptedIndexPathResolution=_attemptedIndexPathResolution - In the implementation block
@property (nonatomic,retain) NSString * resolvedIndexPath;                     //@synthesize resolvedIndexPath=_resolvedIndexPath - In the implementation block
@property (assign,nonatomic) int resolvedIndexPathErrorCode;                   //@synthesize resolvedIndexPathErrorCode=_resolvedIndexPathErrorCode - In the implementation block
@property (nonatomic,retain) NSString * indexPath;                             //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) CSIndexConnection * savedConnection;              //@synthesize savedConnection=_savedConnection - In the implementation block
+(id)defaultSearchableIndex;
-(CSIndexConnection *)savedConnection;
-(id)xpc_dictionary_for_command:(const char*)arg1 requiresInitialization:(BOOL)arg2 ;
-(void)setIndexPath:(NSString *)arg1 ;
-(NSString *)resolvedIndexPath;
-(void)setResolvedIndexPath:(NSString *)arg1 ;
-(NSString *)indexPath;
-(id)initWithPath:(id)arg1 ;
-(void)setSavedConnection:(CSIndexConnection *)arg1 ;
-(void)setAttemptedIndexPathResolution:(BOOL)arg1 ;
-(id)connection;
-(BOOL)attemptedIndexPathResolution;
-(int)resolvedIndexPathErrorCode;
-(void)setResolvedIndexPathErrorCode:(int)arg1 ;
-(void)dealloc;
@end

