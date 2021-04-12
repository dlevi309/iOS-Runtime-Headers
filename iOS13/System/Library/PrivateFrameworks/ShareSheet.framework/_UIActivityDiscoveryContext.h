/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(void)setActivityItemValueExtensionMatchingDictionaries:(NSArray *)arg1 ;
-(NSArray *)activityItemValueExtensionMatchingDictionaries;
-(id)newExtensionItem;
@end

