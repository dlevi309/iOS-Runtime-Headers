/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3DatabaseOperation.h>

@interface ML3RemoveTracksOperation : ML3DatabaseOperation
-(BOOL)_execute:(id*)arg1 ;
-(unsigned long long)type;
-(BOOL)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(BOOL)_removeSource:(int)arg1 usingTransaction:(id)arg2 ;
-(BOOL)_removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3 ;
@end

