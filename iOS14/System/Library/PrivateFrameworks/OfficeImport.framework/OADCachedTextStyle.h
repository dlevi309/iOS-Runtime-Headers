/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADCachedTextStyle : NSObject {

	OADCachedTextStyleData mData;
	unsigned long long mHash;

}
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTextBodyProperties:(id)arg1 paragraphProperties:(id)arg2 characterProperties:(id)arg3 colorContext:(id)arg4 graphicStyleCache:(id)arg5 ;
-(void)applyToParagraphProperties:(id)arg1 graphicStyleCache:(id)arg2 ;
-(void)applyToTextBodyProperties:(id)arg1 graphicStyleCache:(id)arg2 ;
@end

