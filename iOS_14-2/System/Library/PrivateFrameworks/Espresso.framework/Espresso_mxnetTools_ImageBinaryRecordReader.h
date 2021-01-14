/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(mxnetTools_imageID_t_)imageID;
-(id)imageData;
-(unsigned long long)currentOffset;
-(void)setCurrentOffset:(unsigned long long)arg1 ;
-(mxnetTools_imageHeader_t_)imageHeader;
-(mxnetTools_recordHeader_t_)recordHeader;
-(NSFileHandle *)recFileHandle;
-(BOOL)nextRecordAndError:(id*)arg1 ;
-(id)initWithRecFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)seekRecordWithID:(mxnetTools_imageID_t_*)arg1 error:(id*)arg2 ;
-(void)setRecFileHandle:(NSFileHandle *)arg1 ;
-(void)setRecordHeader:(mxnetTools_recordHeader_t_)arg1 ;
-(void)setImageHeader:(mxnetTools_imageHeader_t_)arg1 ;
-(NSMutableArray *)labelsPrivate;
-(void)setLabelsPrivate:(NSMutableArray *)arg1 ;
@end

