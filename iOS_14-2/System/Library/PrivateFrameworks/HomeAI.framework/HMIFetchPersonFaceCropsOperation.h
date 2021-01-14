/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIPersonManagerDataSource;
@class HMIPerson, NSSet, NSString, NSArray;

@interface HMIFetchPersonFaceCropsOperation : HMFOperation <HMFObject, HMFLogging> {

	id<HMIPersonManagerDataSource> _dataSource;
	HMIPerson* _person;
	NSSet* _personFaceCrops;

}

@property (readonly) id<HMIPersonManagerDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMIPerson * person;                                          //@synthesize person=_person - In the implementation block
@property (readonly) NSSet * personFaceCrops;                                     //@synthesize personFaceCrops=_personFaceCrops - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)shortDescription;
-(HMIPerson *)person;
-(NSString *)privateDescription;
-(NSString *)shortDescription;
-(id<HMIPersonManagerDataSource>)dataSource;
-(void)main;
-(id)initWithDataSource:(id)arg1 person:(id)arg2 ;
-(NSSet *)personFaceCrops;
@end

