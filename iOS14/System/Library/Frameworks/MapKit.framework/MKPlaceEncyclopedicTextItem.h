/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKPlaceEncyclopedicRowViewItem.h>

@class NSString;

@interface MKPlaceEncyclopedicTextItem : NSObject <MKPlaceEncyclopedicRowViewItem> {

	NSString* label;
	NSString* value;

}

@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textItemWithLabel:(id)arg1 value:(id)arg2 ;
-(NSString *)label;
-(NSString *)value;
@end

