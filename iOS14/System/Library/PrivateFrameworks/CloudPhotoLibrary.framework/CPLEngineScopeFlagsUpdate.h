/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@class NSArray;

@interface CPLEngineScopeFlagsUpdate : NSObject {

	long long _flags;
	long long _updatedFlagsMask;

}

@property (nonatomic,readonly) long long updatedFlagsMask;              //@synthesize updatedFlagsMask=_updatedFlagsMask - In the implementation block
@property (nonatomic,readonly) long long flags;                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) BOOL hasFlagUpdates; 
@property (nonatomic,readonly) NSArray * arrayDescription; 
+(id)_arrayDescriptionForFlags:(long long)arg1 remainingFlags:(long long*)arg2 ;
+(id)flagsDescriptionMapping;
+(id)descriptionForFlags:(long long)arg1 ;
-(id)init;
-(long long)flags;
-(id)description;
-(id)initWithFlags:(long long)arg1 ;
-(id)redactedDescription;
-(BOOL)valueForFlag:(long long)arg1 ;
-(void)setValue:(BOOL)arg1 forFlag:(long long)arg2 ;
-(void)updateFlags:(long long)arg1 withFlagsValue:(long long)arg2 ;
-(void)updateFlags:(id)arg1 ;
-(long long)updatedFlagsFromFlags:(long long)arg1 ;
-(BOOL)hasFlagUpdates;
-(NSArray *)arrayDescription;
-(long long)updatedFlagsMask;
@end

