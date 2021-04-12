/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PHFetchResult, NSDictionary;

@interface PXMemoriesDataSourceState : NSObject <NSCopying> {

	PHFetchResult* _memories;
	NSDictionary* _infosByMemory;

}

@property (nonatomic,readonly) PHFetchResult * memories;                  //@synthesize memories=_memories - In the implementation block
@property (nonatomic,readonly) NSDictionary * infosByMemory;              //@synthesize infosByMemory=_infosByMemory - In the implementation block
-(PHFetchResult *)memories;
-(id)initWithMemories:(id)arg1 infosByMemory:(id)arg2 ;
-(id)stateUpdatedWithChange:(id)arg1 outMemoriesChangeDetails:(out id*)arg2 ;
-(NSDictionary *)infosByMemory;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

