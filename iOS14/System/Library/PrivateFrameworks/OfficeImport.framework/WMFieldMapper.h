/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WMParagraphMapper.h>

@class NSMutableString, NSString;

@interface WMFieldMapper : WMParagraphMapper {

	int mMode;
	unsigned mType;
	NSMutableString* mMarkerText;
	NSString* mLink;

}
-(void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3 ;
-(id)initWithWDFieldMarker:(id)arg1 parent:(id)arg2 ;
-(void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3 ;
@end

