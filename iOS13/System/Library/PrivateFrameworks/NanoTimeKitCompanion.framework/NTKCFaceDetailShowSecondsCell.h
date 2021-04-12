/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NTKEditOptionCollection *)collection;
-(id)initWithCollection:(id)arg1 ;
-(long long)mode;
@end

