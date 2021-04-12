/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSCoder.h>

@class NSMutableData;

@interface NSArchiver : NSCoder {

	void* mdata;
	void* pointerTable;
	void* stringTable;
	void* ids;
	void* map;
	void* replacementTable;
	void* reserved;

}

@property (retain,readonly) NSMutableData * archiverData; 
+(void)initialize;
+(void)encodeClassName:(id)arg1 intoClassName:(id)arg2 ;
+(id)archivedDataWithRootObject:(id)arg1 ;
+(id)classNameEncodedForTrueClassName:(id)arg1 ;
+(BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2 ;
-(void)dealloc;
-(id)data;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)encodeClassName:(id)arg1 intoClassName:(id)arg2 ;
-(id)initForWritingWithMutableData:(id)arg1 ;
-(void)encodeRootObject:(id)arg1 ;
-(id)classNameEncodedForTrueClassName:(id)arg1 ;
-(NSMutableData *)archiverData;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
@end

