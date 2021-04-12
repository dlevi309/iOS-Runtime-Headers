/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSSet;

@interface NSCloudKitMirroringDelegateSerializationRequest : NSCloudKitMirroringRequest {

	unsigned long long _resultType;
	NSSet* _objectIDsToSerialize;

}

@property (assign,nonatomic) unsigned long long resultType;              //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSSet * objectIDsToSerialize;                 //@synthesize objectIDsToSerialize=_objectIDsToSerialize - In the implementation block
+(id)stringForResultType:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)resultType;
-(void)setResultType:(unsigned long long)arg1 ;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setObjectIDsToSerialize:(NSSet *)arg1 ;
-(NSSet *)objectIDsToSerialize;
@end

