/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NEIKEv2ChildSAConfiguration : NSObject <NSCopying> {

	NSArray* _proposals;
	BOOL _sequencePerTrafficClass;
	unsigned _replayWindowSize;
	unsigned long long _mode;
	NSArray* _localTrafficSelectors;
	NSArray* _remoteTrafficSelectors;

}

@property (assign) unsigned long long mode;                       //@synthesize mode=_mode - In the implementation block
@property (assign) unsigned replayWindowSize;                     //@synthesize replayWindowSize=_replayWindowSize - In the implementation block
@property (assign) BOOL sequencePerTrafficClass;                  //@synthesize sequencePerTrafficClass=_sequencePerTrafficClass - In the implementation block
@property (nonatomic,retain) NSArray * proposals; 
@property (retain) NSArray * localTrafficSelectors;               //@synthesize localTrafficSelectors=_localTrafficSelectors - In the implementation block
@property (retain) NSArray * remoteTrafficSelectors;              //@synthesize remoteTrafficSelectors=_remoteTrafficSelectors - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setLocalTrafficSelectors:(NSArray *)arg1 ;
-(void)setRemoteTrafficSelectors:(NSArray *)arg1 ;
-(NSArray *)proposals;
-(NSArray *)localTrafficSelectors;
-(NSArray *)remoteTrafficSelectors;
-(void)setProposals:(NSArray *)arg1 ;
-(void)setReplayWindowSize:(unsigned)arg1 ;
-(unsigned)replayWindowSize;
-(BOOL)sequencePerTrafficClass;
-(void)setSequencePerTrafficClass:(BOOL)arg1 ;
@end

