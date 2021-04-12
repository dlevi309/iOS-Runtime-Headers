/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCFaceDetailToggleCell.h>

@class NTKEditOptionCollection;

@interface NTKCFaceDetailShowSecondsCell : NTKCFaceDetailToggleCell {

	NTKEditOptionCollection* _collection;
	long long _mode;

}

@property (nonatomic,readonly) NTKEditOptionCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) long long mode;                                    //@synthesize mode=_mode - In the implementation block
+(id)reuseIdentifier;
-(long long)mode;
-(NTKEditOptionCollection *)collection;
-(id)initWithCollection:(id)arg1 ;
@end

