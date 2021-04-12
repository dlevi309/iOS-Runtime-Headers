/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSArray;

@interface CPLEngineScopeFlagsUpdate : NSObject {

	long long _flags;
	long long _updatedFlagsMask;

}

@property (nonatomic,readonly) long long updatedFlagsMask;              //@synthesize updatedFlagsMask=_updatedFlagsMask - In the implementation block
@property (nonatomic,readonly) long long flags;                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSArray * arrayDescription; 
+(id)_arrayDescriptionForFlags:(long long)arg1 remainingFlags:(long long*)arg2 ;
+(id)flagsDescriptionMapping;
+(id)descriptionForFlags:(long long)arg1 ;
-(id)init;
-(id)description;
-(long long)flags;
-(id)initWithFlags:(long long)arg1 ;
-(BOOL)valueForFlag:(long long)arg1 ;
-(void)setValue:(BOOL)arg1 forFlag:(long long)arg2 ;
-(long long)updatedFlagsFromFlags:(long long)arg1 ;
-(NSArray *)arrayDescription;
-(long long)updatedFlagsMask;
@end

