/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray;

@interface MFObjectTable : NSObject {

	NSMutableArray* m_objects;
	unsigned m_maximumSize;

}

@property (assign) unsigned maximumSize; 
-(id)init;
-(void)clear;
-(int)size;
-(unsigned)maximumSize;
-(void)setMaximumSize:(unsigned)arg1 ;
-(int)deleteObject:(unsigned)arg1 ;
-(unsigned)insertPos;
-(int)selectInto:(int)arg1 io_DC:(id)arg2 ;
-(int)putObject:(id)arg1 in_objectPos:(unsigned)arg2 ;
-(id)getObject:(unsigned)arg1 ;
@end

