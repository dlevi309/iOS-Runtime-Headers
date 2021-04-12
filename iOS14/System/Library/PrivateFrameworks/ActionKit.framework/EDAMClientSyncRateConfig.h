/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMClientSyncRateConfig : FATObject {

	NSNumber* _syncStateIntervalMillis;
	NSNumber* _updateNoteWhenIdleForMillis;
	NSNumber* _updateNoteDuringEditIntervalMillis;

}

@property (nonatomic,retain) NSNumber * syncStateIntervalMillis;                         //@synthesize syncStateIntervalMillis=_syncStateIntervalMillis - In the implementation block
@property (nonatomic,retain) NSNumber * updateNoteWhenIdleForMillis;                     //@synthesize updateNoteWhenIdleForMillis=_updateNoteWhenIdleForMillis - In the implementation block
@property (nonatomic,retain) NSNumber * updateNoteDuringEditIntervalMillis;              //@synthesize updateNoteDuringEditIntervalMillis=_updateNoteDuringEditIntervalMillis - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)syncStateIntervalMillis;
-(void)setSyncStateIntervalMillis:(NSNumber *)arg1 ;
-(NSNumber *)updateNoteWhenIdleForMillis;
-(void)setUpdateNoteWhenIdleForMillis:(NSNumber *)arg1 ;
-(NSNumber *)updateNoteDuringEditIntervalMillis;
-(void)setUpdateNoteDuringEditIntervalMillis:(NSNumber *)arg1 ;
@end

