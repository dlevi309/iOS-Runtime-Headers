/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface PUOperationStatus : NSObject <NSCopying> {

	long long _state;
	double _progress;
	NSError* _error;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(double)progress;
-(id)init;
-(NSError *)error;
-(id)description;
-(id)operationStatusByMixingOperationStatus:(id)arg1 withMixFactor:(double)arg2 ;
-(id)initWithState:(long long)arg1 progress:(double)arg2 error:(id)arg3 ;
-(unsigned long long)hash;
-(long long)state;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

