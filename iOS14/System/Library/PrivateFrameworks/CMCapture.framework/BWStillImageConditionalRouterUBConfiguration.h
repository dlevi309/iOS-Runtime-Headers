/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWStillImageConditionalRouterConfiguration.h>

@class NSArray;

@interface BWStillImageConditionalRouterUBConfiguration : BWStillImageConditionalRouterConfiguration {

	NSArray* _portTypes;

}

@property (nonatomic,readonly) NSArray * portTypes;              //@synthesize portTypes=_portTypes - In the implementation block
+(id)configurationWithPortTypes:(id)arg1 ;
-(unsigned long long)outputIndexForPortType:(id)arg1 ;
-(NSArray *)portTypes;
-(id)initWithPortTypes:(id)arg1 ;
-(void)dealloc;
@end

