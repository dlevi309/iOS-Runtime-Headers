/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableArray;

@interface MFObjectTable : NSObject {

	NSMutableArray* m_objects;
	unsigned m_maximumSize;

}

@property (assign) unsigned maximumSize; 
-(void)clear;
-(int)deleteObject:(unsigned)arg1 ;
-(id)init;
-(unsigned)maximumSize;
-(int)size;
-(void)setMaximumSize:(unsigned)arg1 ;
-(unsigned)insertPos;
-(int)selectInto:(int)arg1 io_DC:(id)arg2 ;
-(int)putObject:(id)arg1 in_objectPos:(unsigned)arg2 ;
-(id)getObject:(unsigned)arg1 ;
@end

