/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

