/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIPersonManagerDataSource;
@class NSString, NSArray, NSSet;

@interface HMIFetchPersonsOperation : HMFOperation <HMFObject, HMFLogging> {

	id<HMIPersonManagerDataSource> _dataSource;
	NSSet* _persons;

}

@property (readonly) id<HMIPersonManagerDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSSet * persons;                                             //@synthesize persons=_persons - In the implementation block
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
-(NSString *)privateDescription;
-(NSSet *)persons;
-(id)initWithDataSource:(id)arg1 ;
-(NSString *)shortDescription;
-(id<HMIPersonManagerDataSource>)dataSource;
-(void)main;
@end

