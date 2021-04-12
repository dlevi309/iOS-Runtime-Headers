/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleSpecArgument.h>

@interface PGTitleSpecTimeArgument : PGTitleSpecArgument {

	unsigned long long _type;

}

@property (readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)argumentWithTimeType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)_resolvedStringWithMomentNodes:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 ;
-(id)_birthdayTitleWithMomentNodes:(id)arg1 ;
-(id)initWithTimeType:(unsigned long long)arg1 ;
-(id)_yearsAgoTitle;
-(id)_anniversaryTitleWithMomentNodes:(id)arg1 ;
-(id)_yearsAgoStringWithEventNodes:(id)arg1 relativeToDateComponents:(id)arg2 ;
-(id)_holidayTitleWithMomentNodes:(id)arg1 ;
@end

