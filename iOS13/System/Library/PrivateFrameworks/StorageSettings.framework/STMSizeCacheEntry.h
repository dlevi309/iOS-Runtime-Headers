/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
*/


@class NSString, NSNumber;

@interface STMSizeCacheEntry : NSObject {

	NSString* _itemPath;
	NSNumber* _itemSize;
	unsigned long long _fsEvtID;
	unsigned long long _status;
	unsigned long long _sizeEventID;

}

@property (retain) NSString * itemPath;                         //@synthesize itemPath=_itemPath - In the implementation block
@property (retain) NSNumber * itemSize;                         //@synthesize itemSize=_itemSize - In the implementation block
@property (assign) unsigned long long fsEvtID;                  //@synthesize fsEvtID=_fsEvtID - In the implementation block
@property (assign) unsigned long long status;                   //@synthesize status=_status - In the implementation block
@property (assign) unsigned long long sizeEventID;              //@synthesize sizeEventID=_sizeEventID - In the implementation block
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSNumber *)itemSize;
-(void)setItemSize:(NSNumber *)arg1 ;
-(void)setSizeEventID:(unsigned long long)arg1 ;
-(NSString *)itemPath;
-(id)sizeOperation;
-(void)setItemPath:(NSString *)arg1 ;
-(unsigned long long)fsEvtID;
-(void)setFsEvtID:(unsigned long long)arg1 ;
-(unsigned long long)sizeEventID;
@end

