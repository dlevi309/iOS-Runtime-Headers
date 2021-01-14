/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSCloudKitMirroringResult.h>

@class NSDictionary;

@interface NSCloudKitMirroringDelegateSerializationRequestResult : NSCloudKitMirroringResult {

	NSDictionary* _serializedObjects;

}

@property (nonatomic,readonly) NSDictionary * serializedObjects;              //@synthesize serializedObjects=_serializedObjects - In the implementation block
-(id)initWithRequest:(id)arg1 serializedObjects:(id)arg2 error:(id)arg3 ;
-(NSDictionary *)serializedObjects;
-(void)dealloc;
@end

