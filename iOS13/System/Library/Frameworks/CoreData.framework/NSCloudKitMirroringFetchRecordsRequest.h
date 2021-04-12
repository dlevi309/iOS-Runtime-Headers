/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSCloudKitMirroringImportRequest.h>

@class NSArray, NSDictionary;

@interface NSCloudKitMirroringFetchRecordsRequest : NSCloudKitMirroringImportRequest {

	NSArray* _objectIDsToFetch;
	NSDictionary* _entityNameToAttributesToFetch;
	NSDictionary* _entityNameToAttributeNamesToFetch;
	BOOL _editable;

}

@property (nonatomic,copy) NSArray * objectIDsToFetch;                                         //@synthesize objectIDsToFetch=_objectIDsToFetch - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * entityNameToAttributesToFetch; 
-(void)dealloc;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)_isEditable;
-(void)throwNotEditable:(SEL)arg1 ;
-(BOOL)validateForUseWithStore:(id)arg1 error:(id*)arg2 ;
-(id)_entityNameToAttributeNamesToFetch;
-(NSDictionary *)entityNameToAttributesToFetch;
-(void)setEntityNameToAttributesToFetch:(NSDictionary *)arg1 ;
-(void)setEntityNameToAttributeNamesToFetch:(id)arg1 ;
-(void)setObjectIDsToFetch:(NSArray *)arg1 ;
-(NSArray *)objectIDsToFetch;
@end

