/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSDictionary;

@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult {

	NSDictionary* _objectIDToLastExportedToken;

}

@property (nonatomic,readonly) NSDictionary * objectIDToLastExportedToken;              //@synthesize objectIDToLastExportedToken=_objectIDToLastExportedToken - In the implementation block
-(id)initWithRequest:(id)arg1 objectIDToLastExportedToken:(id)arg2 error:(id)arg3 ;
-(NSDictionary *)objectIDToLastExportedToken;
-(void)dealloc;
@end

