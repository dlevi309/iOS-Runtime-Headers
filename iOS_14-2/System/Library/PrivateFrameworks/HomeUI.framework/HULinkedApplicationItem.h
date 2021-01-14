/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class NSSet, NSString;

@interface HULinkedApplicationItem : HFItem {

	NSSet* _associatedAccessories;

}

@property (nonatomic,retain) NSSet * associatedAccessories;              //@synthesize associatedAccessories=_associatedAccessories - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
-(id)init;
-(NSString *)bundleIdentifier;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)associatedAccessories;
-(int)_iconVariantForScale:(double)arg1 ;
-(id)_failedUpdateOutcome;
-(void)setAssociatedAccessories:(NSSet *)arg1 ;
@end

