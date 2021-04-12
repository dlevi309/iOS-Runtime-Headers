/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSString, UNSBundleLibrarian;

@interface UNSKeyedDictionaryRepository : NSObject {

	NSString* _directory;
	NSString* _fileName;
	NSString* _pathExtension;
	UNSBundleLibrarian* _librarian;

}
-(id)allKeys;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)_pathForKey:(id)arg1 ;
-(void)removeDictionaryForKey:(id)arg1 ;
-(id)_dictionaryAtPath:(id)arg1 ;
-(BOOL)_saveDictionary:(id)arg1 atPath:(id)arg2 ;
-(void)_removeDictionaryAtPath:(id)arg1 ;
-(id)_directoryForKey:(id)arg1 ;
-(id)_dataAtPath:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 librarian:(id)arg4 ;
@end

