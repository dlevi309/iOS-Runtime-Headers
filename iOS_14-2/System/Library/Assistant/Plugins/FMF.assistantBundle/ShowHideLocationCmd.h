/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
*/

#import <FMF/FMFBaseCmd.h>

@class CLLocation;

@interface ShowHideLocationCmd : FMFBaseCmd {

	BOOL hideLocation;
	CLLocation* currentLocation;

}

@property (assign,nonatomic) BOOL hideLocation; 
@property (nonatomic,copy) CLLocation * currentLocation; 
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(id)path;
-(id)result;
-(id)jsonBodyDictionary;
-(void)setHideLocation:(BOOL)arg1 ;
-(id)currentLocationDictionary;
-(BOOL)hideLocation;
@end

