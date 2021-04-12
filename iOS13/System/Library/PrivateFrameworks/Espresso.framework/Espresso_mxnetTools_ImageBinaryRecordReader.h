/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@class NSFileHandle, NSMutableArray;

@interface Espresso_mxnetTools_ImageBinaryRecordReader : NSObject {

	NSFileHandle* _recFileHandle;
	mxnetTools_recordHeader_t_ _recordHeader;
	unsigned long long _currentOffset;
	NSMutableArray* _labelsPrivate;
	mxnetTools_imageHeader_t_ _imageHeader;

}

@property (retain) NSFileHandle * recFileHandle;                         //@synthesize recFileHandle=_recFileHandle - In the implementation block
@property (assign) mxnetTools_recordHeader_t_ recordHeader;              //@synthesize recordHeader=_recordHeader - In the implementation block
@property (assign) mxnetTools_imageHeader_t_ imageHeader;                //@synthesize imageHeader=_imageHeader - In the implementation block
@property (assign) unsigned long long currentOffset;                     //@synthesize currentOffset=_currentOffset - In the implementation block
@property (retain) NSMutableArray * labelsPrivate;                       //@synthesize labelsPrivate=_labelsPrivate - In the implementation block
-(id)labels;
-(unsigned long long)currentOffset;
-(void)setCurrentOffset:(unsigned long long)arg1 ;
-(id)imageData;
-(mxnetTools_imageID_t_)imageID;
-(id)initWithRecFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)seekRecordWithID:(mxnetTools_imageID_t_*)arg1 error:(id*)arg2 ;
-(BOOL)nextRecordAndError:(id*)arg1 ;
-(NSFileHandle *)recFileHandle;
-(void)setRecFileHandle:(NSFileHandle *)arg1 ;
-(mxnetTools_recordHeader_t_)recordHeader;
-(void)setRecordHeader:(mxnetTools_recordHeader_t_)arg1 ;
-(mxnetTools_imageHeader_t_)imageHeader;
-(void)setImageHeader:(mxnetTools_imageHeader_t_)arg1 ;
-(NSMutableArray *)labelsPrivate;
-(void)setLabelsPrivate:(NSMutableArray *)arg1 ;
@end

