/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RETextContentProvider.h>

@class CLKTextProvider;

@interface REClockKitWrappedContentProvider : RETextContentProvider {

	CLKTextProvider* _clockKitTextProvider;

}

@property (nonatomic,readonly) CLKTextProvider * clockKitTextProvider;              //@synthesize clockKitTextProvider=_clockKitTextProvider - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)attributedStringRepresentation;
-(id)clockKitTextProviderRepresentation;
-(CLKTextProvider *)clockKitTextProvider;
-(id)initWithClockKitTextProvider:(id)arg1 ;
@end

