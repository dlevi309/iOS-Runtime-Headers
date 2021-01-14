/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/


@class NSArray;

@interface TPSInclusivityInfo : NSObject {

	NSArray* _targetValues;
	NSArray* _excludeValues;

}

@property (nonatomic,copy) NSArray * targetValues;               //@synthesize targetValues=_targetValues - In the implementation block
@property (nonatomic,copy) NSArray * excludeValues;              //@synthesize excludeValues=_excludeValues - In the implementation block
-(id)debugDescription;
-(id)initWithTargetValues:(id)arg1 excludeValues:(id)arg2 ;
-(NSArray *)targetValues;
-(NSArray *)excludeValues;
-(void)setTargetValues:(NSArray *)arg1 ;
-(void)setExcludeValues:(NSArray *)arg1 ;
@end

