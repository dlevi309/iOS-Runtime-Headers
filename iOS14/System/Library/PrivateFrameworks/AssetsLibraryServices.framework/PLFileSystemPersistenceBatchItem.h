/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSURL, NSMutableDictionary;

@interface PLFileSystemPersistenceBatchItem : NSObject {

	NSURL* _fileURL;
	NSMutableDictionary* _attributes;

}

@property (nonatomic,readonly) NSURL * fileURL;                             //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setData:(id)arg1 forKey:(id)arg2 ;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(NSURL *)fileURL;
-(NSMutableDictionary *)attributes;
-(id)initWithFileURL:(id)arg1 ;
-(id)description;
-(void)setUInt16:(unsigned short)arg1 forKey:(id)arg2 ;
-(void)setUInt64:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)setInt32:(int)arg1 forKey:(id)arg2 ;
-(void)setUUIDString:(id)arg1 forKey:(id)arg2 ;
-(void)persist;
@end

