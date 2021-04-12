/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSVSAPSignatureComponent : NSObject <NSCopying> {

	long long _componentType;
	NSString* _key;

}

@property (nonatomic,readonly) long long componentType;              //@synthesize componentType=_componentType - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(long long)componentType;
-(id)initWithComponentType:(long long)arg1 key:(id)arg2 ;
-(id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2 ;
-(id)dataToSignWithURLRequest:(id)arg1 ;
-(id)_dataToSignWithDataSource:(id)arg1 ;
-(id)dataToSignWithRequestProperties:(id)arg1 ;
@end

