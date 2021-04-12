/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKPlaceEncyclopedicRowViewItem.h>

@class NSString;

@interface MKPlaceEncyclopedicTextItem : NSObject <MKPlaceEncyclopedicRowViewItem> {

	NSString* label;
	NSString* value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
+(id)textItemWithLabel:(id)arg1 value:(id)arg2 ;
-(NSString *)value;
-(NSString *)label;
@end

