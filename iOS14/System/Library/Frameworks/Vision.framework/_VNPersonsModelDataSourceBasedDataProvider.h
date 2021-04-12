/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <libobjc.A.dylib/VNPersonsModelFaceModelDataProvider.h>

@protocol VNPersonsModelDataSource;
@class VNPersonsModel, NSString;

@interface _VNPersonsModelDataSourceBasedDataProvider : NSObject <VNPersonsModelFaceModelDataProvider> {

	VNPersonsModel* _personsModel;
	id<VNPersonsModelDataSource> _dataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)faceModelPersonsCount;
-(id)faceModelUniqueIdentifierOfPersonAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)faceModelIndexOfPersonWithUniqueIdentifier:(id)arg1 ;
-(unsigned long long)faceModelNumberOfFaceObservationsForPersonAtIndex:(unsigned long long)arg1 ;
-(id)faceModelFaceObservationAtIndex:(unsigned long long)arg1 forPersonAtIndex:(unsigned long long)arg2 ;
-(id)initWithPersonsModel:(id)arg1 dataSource:(id)arg2 ;
@end

