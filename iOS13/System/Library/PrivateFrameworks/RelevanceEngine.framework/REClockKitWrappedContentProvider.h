/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class CLKTextProvider;

@interface REClockKitWrappedContentProvider : RETextContentProvider {

	CLKTextProvider* _clockKitTextProvider;

}

@property (nonatomic,readonly) CLKTextProvider * clockKitTextProvider;              //@synthesize clockKitTextProvider=_clockKitTextProvider - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(CLKTextProvider *)clockKitTextProvider;
-(id)initWithClockKitTextProvider:(id)arg1 ;
@end

