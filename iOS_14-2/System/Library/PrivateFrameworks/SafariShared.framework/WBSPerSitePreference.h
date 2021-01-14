/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WBSPerSitePreference : NSObject <NSCopying> {

	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)localizedStringForBinaryPreferenceValue:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

