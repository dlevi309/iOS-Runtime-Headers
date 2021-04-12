/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/


@class NSString, UNSBundleLibrarian;

@interface UNSKeyedDictionaryRepository : NSObject {

	NSString* _directory;
	NSString* _fileName;
	NSString* _pathExtension;
	UNSBundleLibrarian* _librarian;

}
-(void)removeDictionaryForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)_removeDictionaryAtPath:(id)arg1 ;
-(id)_directoryForKey:(id)arg1 ;
-(id)initWithDirectory:(id)arg1 fileName:(id)arg2 pathExtension:(id)arg3 librarian:(id)arg4 ;
-(id)_pathForKey:(id)arg1 ;
-(id)_dataAtPath:(id)arg1 ;
-(BOOL)_saveDictionary:(id)arg1 atPath:(id)arg2 ;
-(id)_dictionaryAtPath:(id)arg1 ;
-(id)allKeys;
@end

