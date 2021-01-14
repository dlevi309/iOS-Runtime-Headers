/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSDictionary, NSData, NSString, NSArray, NSMutableDictionary;

@interface C3DIONSZipFileArchive : NSObject {

	NSDictionary* _contents;
	NSData* _data;
	id _provider;
	long long _desc;
	NSString* _path;
	NSArray* _names;
	NSDictionary* _properties;
	NSMutableDictionary* _cachedContents;
	void* _reserved;
	struct {
		unsigned providerSuppliesContents : 1;
		unsigned providerSuppliesStreams : 1;
		unsigned providerSuppliesProperties : 1;
		unsigned noContentsCaching : 1;
		unsigned fileOpen : 1;
		unsigned reserved : 27;
	}  _zFlags;
	void** _reserved2[5];

}
-(BOOL)isValid;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)invalidate;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)archiveData;
-(void)dealloc;
-(id)entryNames;
-(id)contentsForEntryName:(id)arg1 ;
-(id)initWithEntryNames:(id)arg1 contents:(id)arg2 properties:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithPath:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithEntryNames:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3 ;
-(id)streamForEntryName:(id)arg1 ;
-(BOOL)writeContentsForEntryName:(id)arg1 toFile:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)propertiesForEntryName:(id)arg1 ;
-(id)archiveStream;
@end

