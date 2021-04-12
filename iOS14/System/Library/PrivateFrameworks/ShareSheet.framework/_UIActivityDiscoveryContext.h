/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _UIActivityDiscoveryContext : NSObject <NSSecureCoding> {

	NSArray* _activityItemValueExtensionMatchingDictionaries;

}

@property (nonatomic,retain) NSArray * activityItemValueExtensionMatchingDictionaries;              //@synthesize activityItemValueExtensionMatchingDictionaries=_activityItemValueExtensionMatchingDictionaries - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextFromExtensionItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)activityItemValueExtensionMatchingDictionaries;
-(id)initWithCoder:(id)arg1 ;
-(void)setActivityItemValueExtensionMatchingDictionaries:(NSArray *)arg1 ;
-(id)newExtensionItem;
@end

