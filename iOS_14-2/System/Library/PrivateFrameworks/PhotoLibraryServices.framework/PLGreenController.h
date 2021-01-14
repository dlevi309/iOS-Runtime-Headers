/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSDictionary;

@interface PLGreenController : NSObject {

	NSDictionary* _currentGreenValues;

}

@property (nonatomic,readonly) NSDictionary * currentGreenValues;              //@synthesize currentGreenValues=_currentGreenValues - In the implementation block
-(id)init;
-(void)readValuesFromDisk;
-(BOOL)isGreenStateValid;
-(BOOL)greenValuesSimilarToGreenValues:(id)arg1 ;
-(NSDictionary *)currentGreenValues;
@end

