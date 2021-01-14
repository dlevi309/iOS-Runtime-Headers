/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class NSString, NSMutableArray;

@interface PPContactDiskCacheHistoryRecordSet : NSObject {

	NSString* _filename;
	NSMutableArray* _adds;
	NSMutableArray* _updates;
	NSMutableArray* _deletes;

}

@property (nonatomic,readonly) NSString * filename;                   //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSMutableArray * adds;                 //@synthesize adds=_adds - In the implementation block
@property (nonatomic,readonly) NSMutableArray * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,readonly) NSMutableArray * deletes;              //@synthesize deletes=_deletes - In the implementation block
-(NSMutableArray *)updates;
-(NSMutableArray *)adds;
-(id)initWithFilename:(id)arg1 ;
-(NSString *)filename;
-(unsigned long long)hash;
-(NSMutableArray *)deletes;
@end

