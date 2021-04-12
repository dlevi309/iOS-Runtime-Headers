/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSCloudKitMirroringImportRequest.h>

@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest {

	NSArray* _objectIDsToFetch;
	NSDictionary* _entityNameToAttributesToFetch;
	NSDictionary* _entityNameToAttributeNamesToFetch;
	BOOL _editable;
	unsigned long long _perOperationObjectThreshold;

}

@property (assign,nonatomic) unsigned long long perOperationObjectThreshold;                   //@synthesize perOperationObjectThreshold=_perOperationObjectThreshold - In the implementation block
@property (nonatomic,copy) NSArray * objectIDsToFetch;                                         //@synthesize objectIDsToFetch=_objectIDsToFetch - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * entityNameToAttributesToFetch; 
-(BOOL)_isEditable;
-(void)setEntityNameToAttributesToFetch:(NSDictionary *)arg1 ;
-(id)_entityNameToAttributeNamesToFetch;
-(void)setPerOperationObjectThreshold:(unsigned long long)arg1 ;
-(void)setObjectIDsToFetch:(NSArray *)arg1 ;
-(NSDictionary *)entityNameToAttributesToFetch;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSArray *)objectIDsToFetch;
-(void)setEntityNameToAttributeNamesToFetch:(id)arg1 ;
-(BOOL)validateForUseWithStore:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)perOperationObjectThreshold;
-(void)dealloc;
@end

