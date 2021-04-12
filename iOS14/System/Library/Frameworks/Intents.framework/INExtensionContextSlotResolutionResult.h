/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface INExtensionContextSlotResolutionResult : NSObject <NSSecureCoding> {

	long long _result;
	NSData* _data;

}

@property (nonatomic,readonly) long long result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSData * data;                 //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithResult:(long long)arg1 data:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(long long)result;
-(id)initWithCoder:(id)arg1 ;
@end

