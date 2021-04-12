/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSDictionary;

@interface NSCloudKitMirroringDelegateSerializationRequestResult : NSCloudKitMirroringResult {

	NSDictionary* _serializedObjects;

}

@property (nonatomic,readonly) NSDictionary * serializedObjects;              //@synthesize serializedObjects=_serializedObjects - In the implementation block
-(void)dealloc;
-(id)initWithRequest:(id)arg1 serializedObjects:(id)arg2 error:(id)arg3 ;
-(NSDictionary *)serializedObjects;
@end

