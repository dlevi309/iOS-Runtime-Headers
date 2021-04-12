/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(long long)result;
-(id)initWithResult:(long long)arg1 data:(id)arg2 ;
@end

