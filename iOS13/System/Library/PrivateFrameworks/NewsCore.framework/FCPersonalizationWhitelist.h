/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@class NTPBPersonalizationWhitelist, NSSet, NSDictionary;

@interface FCPersonalizationWhitelist : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding> {

	NTPBPersonalizationWhitelist* _pbWhitelist;
	NSSet* _portraitDisabledTagIDs;
	NSDictionary* _whitelist;

}

@property (nonatomic,retain) NSDictionary * whitelist;                    //@synthesize whitelist=_whitelist - In the implementation block
@property (nonatomic,retain) NSSet * portraitDisabledTagIDs;              //@synthesize portraitDisabledTagIDs=_portraitDisabledTagIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSDictionary * defaultTags; 
@property (nonatomic,readonly) NSDictionary * optionalTags; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)whitelist;
-(void)setWhitelist:(NSDictionary *)arg1 ;
-(id)jsonEncodableObject;
-(NSDictionary *)defaultTags;
-(NSDictionary *)optionalTags;
-(id)initWithPBPersonalizationWhitelist:(id)arg1 ;
-(NSSet *)portraitDisabledTagIDs;
-(void)setPortraitDisabledTagIDs:(NSSet *)arg1 ;
@end

