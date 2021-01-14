/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/RCFolder.h>

@class NSString, NSSet, RCSavedRecordingsController;

@interface RCBuiltinRecordingsFolder : NSObject <RCFolder> {

	long long _folderType;

}

@property (nonatomic,readonly) id<RCFolderIdentifier> uniqueID; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) long long rank; 
@property (nonatomic,readonly) long long folderType; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) unsigned long long playableCount; 
@property (nonatomic,readonly) NSSet * recordings; 
@property (nonatomic,readonly) RCSavedRecordingsController * contentsController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithType:(long long)arg1 ;
-(NSString *)uuid;
-(id<RCFolderIdentifier>)uniqueID;
-(unsigned long long)playableCount;
-(NSSet *)recordings;
-(NSString *)name;
-(NSString *)description;
-(long long)rank;
-(RCSavedRecordingsController *)contentsController;
-(BOOL)containsRecording:(id)arg1 ;
-(long long)folderType;
@end

