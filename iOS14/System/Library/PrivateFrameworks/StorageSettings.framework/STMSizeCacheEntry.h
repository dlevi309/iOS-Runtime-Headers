/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)itemSize;
-(id)initWithPath:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setItemSize:(NSNumber *)arg1 ;
-(unsigned long long)status;
-(unsigned long long)fsEvtID;
-(void)setSizeEventID:(unsigned long long)arg1 ;
-(NSString *)itemPath;
-(id)sizeOperation;
-(void)setItemPath:(NSString *)arg1 ;
-(void)setFsEvtID:(unsigned long long)arg1 ;
-(unsigned long long)sizeEventID;
@end

