/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)willSave;
-(void)willAccessValueForKey:(id)arg1 ;
-(void)saveNoteDataIfNeeded;
-(BOOL)needsToBeSaved;
-(BOOL)isSettingNoteData;
-(void)setSettingNoteData:(BOOL)arg1 ;
-(void)setNeedsToBeSaved:(BOOL)arg1 ;
@end

