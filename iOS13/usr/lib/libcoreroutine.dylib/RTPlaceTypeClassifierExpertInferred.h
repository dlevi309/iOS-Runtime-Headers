/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTPlaceTypeProvider.h>

@class RTLearnedLocationStore, NSString;

@interface RTPlaceTypeClassifierExpertInferred : NSObject <RTPlaceTypeProvider> {

	RTLearnedLocationStore* _learnedLocationStore;

}

@property (nonatomic,retain) RTLearnedLocationStore * learnedLocationStore;              //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTLearnedLocationStore *)learnedLocationStore;
-(id)classifyWithError:(id*)arg1 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
-(id)initWithLearnedLocationStore:(id)arg1 ;
@end

