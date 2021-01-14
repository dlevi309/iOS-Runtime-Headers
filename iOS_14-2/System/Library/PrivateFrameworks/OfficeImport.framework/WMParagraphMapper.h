/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class WDParagraph, OIXMLElement;

@interface WMParagraphMapper : CMMapper {

	WDParagraph* wdParagraph;
	OIXMLElement* mActiveNode;
	BOOL mIsDeleted;

}
+(void)mapPlaceholderAt:(id)arg1 rect:(CGRect)arg2 withState:(id)arg3 ;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)activeNode;
-(void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3 ;
-(void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3 ;
-(id)runAtIndex:(unsigned long long)arg1 ;
-(BOOL)isTextFrame;
-(BOOL)containsOfficeArt;
-(void)mapParagraphBodyWithState:(id)arg1 ;
-(BOOL)isCollapsable:(id)arg1 ;
-(id)initWithBlock:(id)arg1 parent:(id)arg2 ;
@end

