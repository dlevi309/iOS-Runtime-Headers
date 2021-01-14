/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface WBSCyclerBookmarkRepresentation : NSObject <NSSecureCoding, NSCopying> {

	NSString* _uniqueIdentifier;
	NSString* _title;
	NSDictionary* _extraAttributes;

}

@property (nonatomic,retain) NSString * uniqueIdentifier;               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDictionary * extraAttributes;              //@synthesize extraAttributes=_extraAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setExtraAttributes:(NSDictionary *)arg1 ;
-(id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)pairsOfBookmarksWithDifferingExtraAttributesComparedTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)extraAttributes;
-(NSString *)title;
@end

