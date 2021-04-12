/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dataToSignWithRequestProperties:(id)arg1 ;
-(long long)componentType;
-(NSString *)key;
-(id)initWithComponentType:(long long)arg1 key:(id)arg2 ;
-(id)dataToSignWithURLRequest:(id)arg1 ;
-(id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_dataToSignWithDataSource:(id)arg1 ;
@end

