/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADCachedTextStyle : NSObject {

	OADCachedTextStyleData mData;
	unsigned long long mHash;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithTextBodyProperties:(id)arg1 paragraphProperties:(id)arg2 characterProperties:(id)arg3 colorContext:(id)arg4 graphicStyleCache:(id)arg5 ;
-(void)applyToParagraphProperties:(id)arg1 graphicStyleCache:(id)arg2 ;
-(void)applyToTextBodyProperties:(id)arg1 graphicStyleCache:(id)arg2 ;
@end

