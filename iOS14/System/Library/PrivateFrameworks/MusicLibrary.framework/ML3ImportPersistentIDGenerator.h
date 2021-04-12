/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3PersistentIDGenerator.h>

@class NSMutableDictionary;

@interface ML3ImportPersistentIDGenerator : ML3PersistentIDGenerator {

	NSMutableDictionary* _pregeneratedIdMappings;

}
-(id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2 ;
-(void)addIdMapping:(id)arg1 forProperty:(unsigned)arg2 ;
-(long long)nextPersistentIDForImportItem:(shared_ptr<ML3ImportItem>*)arg1 ;
-(void)removePersistentIDFromIdMapping:(long long)arg1 ;
@end

