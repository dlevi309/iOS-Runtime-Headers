/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoAccessoryItemSizing.h>

@class NSString;

@interface SVVideoAccessoryItemSizer : NSObject <SVVideoAccessoryItemSizing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)frameOfLeadingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(CGRect)frameOfTrailingItemWithDisplayMode:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(CGSize)sizeForDisplayMode:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(CGPoint)originForLeadingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(CGSize)arg2 itemSize:(CGSize)arg3 ;
-(CGPoint)originForTrailingItemWithDisplayMode:(unsigned long long)arg1 constraintToSize:(CGSize)arg2 itemSize:(CGSize)arg3 ;
@end

