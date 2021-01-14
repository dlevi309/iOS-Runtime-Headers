/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class Project, NSString, NSMutableArray, NSMutableSet, NSMutableDictionary, PVEffect, NSSet;

@interface ProjectChangeLog : NSObject {

	Project* m_project;
	NSString* m_themeID;
	NSMutableArray* m_editList;
	NSMutableArray* m_backgroundAudioClips;
	NSMutableArray* m_foregroundAudioClips;
	NSMutableArray* m_cutaways;
	NSMutableSet* m_clipsNeedingDisplay;
	NSMutableSet* m_capturedClips;
	NSMutableArray* m_clipChangeLogs;
	BOOL m_useThemeAudio;
	BOOL m_fadeInFromBlack;
	BOOL m_fadeOutToBlack;
	NSString* m_audioTimePitchAlgorithm;
	NSMutableDictionary* m_trailerDict;
	PVEffect* _filterEffect;

}

@property (nonatomic,readonly) NSSet * capturedClips; 
@property (nonatomic,readonly) NSSet * clipsNeedingDisplay; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy) PVEffect * filterEffect;                      //@synthesize filterEffect=_filterEffect - In the implementation block
-(id)description;
-(BOOL)hasChanges;
-(id)initWithProject:(id)arg1 ;
-(void)dealloc;
-(void)setFilterEffect:(PVEffect *)arg1 ;
-(PVEffect *)filterEffect;
-(void)captureProject:(id)arg1 ;
-(void)captureClip:(id)arg1 needsDisplay:(BOOL)arg2 ;
-(id)redoProjectChangeLog;
-(id)restoreProject;
-(NSSet *)capturedClips;
-(NSSet *)clipsNeedingDisplay;
@end

