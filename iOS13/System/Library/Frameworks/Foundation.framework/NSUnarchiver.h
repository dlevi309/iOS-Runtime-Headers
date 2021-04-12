/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@interface NSUnarchiver : NSCoder {

	void* datax;
	unsigned long long cursor;
	NSZone* objectZone;
	unsigned long long systemVersion;
	char streamerVersion;
	char swap;
	char unused1;
	char unused2;
	void* pointerTable;
	void* stringTable;
	id classVersions;
	long long lastLabel;
	void* map;
	void* allUnarchivedObjects;
	id reserved;

}

@property (getter=isAtEnd,readonly) BOOL atEnd; 
@property (readonly) unsigned systemVersion; 
+(void)initialize;
+(void)decodeClassName:(id)arg1 asClassName:(id)arg2 ;
+(id)unarchiveObjectWithData:(id)arg1 ;
+(id)unarchiveObjectWithFile:(id)arg1 ;
+(id)classNameDecodedForArchiveClassName:(id)arg1 ;
-(void)dealloc;
-(id)data;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(id)decodeObject;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)decodeClassName:(id)arg1 asClassName:(id)arg2 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(id)initForReadingWithData:(id)arg1 ;
-(BOOL)isAtEnd;
-(id)classNameDecodedForArchiveClassName:(id)arg1 ;
-(void)_setAllowedClasses:(id)arg1 ;
-(void)setObjectZone:(NSZone*)arg1 ;
-(NSZone*)objectZone;
-(unsigned)systemVersion;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(id)decodeDataObject;
@end

