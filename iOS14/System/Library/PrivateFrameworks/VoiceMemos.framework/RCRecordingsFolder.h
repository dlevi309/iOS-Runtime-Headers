/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/RCMutableFolder.h>

@class NSString, NSSet, RCSavedRecordingsController;

@interface RCRecordingsFolder : NSManagedObject <RCMutableFolder>

@property (nonatomic,readonly) long long countOfRecordings; 
@property (nonatomic,retain) NSString * encryptedName; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,readonly) id<RCFolderIdentifier> uniqueID; 
@property (nonatomic,readonly) long long folderType; 
@property (nonatomic,readonly) unsigned long long playableCount; 
@property (nonatomic,readonly) NSSet * recordings; 
@property (nonatomic,readonly) RCSavedRecordingsController * contentsController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingCount;
-(id<RCFolderIdentifier>)uniqueID;
-(unsigned long long)playableCount;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(RCSavedRecordingsController *)contentsController;
-(id)initWithContext:(id)arg1 name:(id)arg2 rank:(long long)arg3 ;
-(void)addRecording:(id)arg1 ;
-(void)removeRecording:(id)arg1 ;
-(BOOL)containsRecording:(id)arg1 ;
-(long long)folderType;
@end

