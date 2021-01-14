/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@class NSDictionary;

@interface WFObjectNameProvider : NSObject {

	NSDictionary* _contents;

}

@property (nonatomic,copy,readonly) NSDictionary * contents;              //@synthesize contents=_contents - In the implementation block
+(id)sharedProvider;
-(NSDictionary *)contents;
-(id)init;
-(id)nameForObject:(id)arg1 ;
@end

