/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
*/

#import <DocumentManager/DOCFrecencyBasedEvent.h>

@class FPItem, NSString, NSNumber;

@interface DOCSmartFolderHit : DOCFrecencyBasedEvent {

	FPItem* _folderItem;
	unsigned long long _type;
	NSString* _value;
	NSNumber* _rowId;

}

@property (nonatomic,retain) NSNumber * rowId;                     //@synthesize rowId=_rowId - In the implementation block
@property (nonatomic,copy) FPItem * folderItem;                    //@synthesize folderItem=_folderItem - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * value;                       //@synthesize value=_value - In the implementation block
-(void)setType:(unsigned long long)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSNumber *)rowId;
-(unsigned long long)type;
-(void)setRowId:(NSNumber *)arg1 ;
-(NSString *)value;
-(id)initWithRowId:(id)arg1 folder:(id)arg2 type:(unsigned long long)arg3 value:(id)arg4 lastUsedDate:(id)arg5 frecency:(double)arg6 ;
-(id)initWithFolder:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3 lastUsedDate:(id)arg4 frecency:(double)arg5 ;
-(FPItem *)folderItem;
-(void)setFolderItem:(FPItem *)arg1 ;
@end

