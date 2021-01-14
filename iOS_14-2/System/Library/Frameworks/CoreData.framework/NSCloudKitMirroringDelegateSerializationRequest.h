/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResultType:(unsigned long long)arg1 ;
-(unsigned long long)resultType;
-(id)description;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSSet *)objectIDsToSerialize;
-(void)setObjectIDsToSerialize:(NSSet *)arg1 ;
@end

