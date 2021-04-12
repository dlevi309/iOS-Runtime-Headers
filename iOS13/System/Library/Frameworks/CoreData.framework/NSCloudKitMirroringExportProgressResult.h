/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSDictionary;

@interface NSCloudKitMirroringExportProgressResult : NSCloudKitMirroringResult {

	NSDictionary* _objectIDToLastExportedToken;

}

@property (nonatomic,readonly) NSDictionary * objectIDToLastExportedToken;              //@synthesize objectIDToLastExportedToken=_objectIDToLastExportedToken - In the implementation block
-(void)dealloc;
-(id)initWithRequest:(id)arg1 objectIDToLastExportedToken:(id)arg2 error:(id)arg3 ;
-(NSDictionary *)objectIDToLastExportedToken;
@end

