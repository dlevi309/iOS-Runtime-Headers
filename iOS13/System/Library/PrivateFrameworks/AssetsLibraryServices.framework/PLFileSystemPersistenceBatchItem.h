/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSURL, NSMutableDictionary;

@interface PLFileSystemPersistenceBatchItem : NSObject {

	NSURL* _fileURL;
	NSMutableDictionary* _attributes;

}

@property (nonatomic,readonly) NSURL * fileURL;                             //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(id)description;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(void)persist;
-(void)setUInt16:(unsigned short)arg1 forKey:(id)arg2 ;
-(void)setInt32:(int)arg1 forKey:(id)arg2 ;
-(void)setUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)setUUIDString:(id)arg1 forKey:(id)arg2 ;
@end

