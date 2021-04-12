/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RTLearnedLocationStore *)learnedLocationStore;
-(id)init;
-(id)classifyWithError:(id*)arg1 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
-(id)initWithLearnedLocationStore:(id)arg1 ;
@end

