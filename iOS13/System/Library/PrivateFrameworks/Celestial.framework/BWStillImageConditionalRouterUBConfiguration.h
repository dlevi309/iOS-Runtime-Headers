/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWStillImageConditionalRouterConfiguration.h>

@class NSArray;

@interface BWStillImageConditionalRouterUBConfiguration : BWStillImageConditionalRouterConfiguration {

	NSArray* _portTypes;

}

@property (nonatomic,readonly) NSArray * portTypes;              //@synthesize portTypes=_portTypes - In the implementation block
+(id)configurationWithPortTypes:(id)arg1 ;
-(void)dealloc;
-(NSArray *)portTypes;
-(id)initWithPortTypes:(id)arg1 ;
-(unsigned long long)outputIndexForPortType:(id)arg1 ;
@end

