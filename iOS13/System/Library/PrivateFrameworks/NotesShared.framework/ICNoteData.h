/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <CoreData/NSManagedObject.h>

@class NSData, ICNote;

@interface ICNoteData : NSManagedObject {

	BOOL needsToBeSaved;
	BOOL settingNoteData;

}

@property (assign,getter=isSettingNoteData,nonatomic) BOOL settingNoteData; 
@property (nonatomic,retain) NSData * cryptoInitializationVector; 
@property (nonatomic,retain) NSData * cryptoTag; 
@property (assign) BOOL needsToBeSaved; 
@property (nonatomic,retain) NSData * data; 
@property (nonatomic,retain) ICNote * note; 
@property (nonatomic,readonly) NSData * primitiveData; 
-(void)willAccessValueForKey:(id)arg1 ;
-(void)willSave;
-(void)saveNoteDataIfNeeded;
-(BOOL)needsToBeSaved;
-(BOOL)isSettingNoteData;
-(void)setSettingNoteData:(BOOL)arg1 ;
-(void)setNeedsToBeSaved:(BOOL)arg1 ;
@end

