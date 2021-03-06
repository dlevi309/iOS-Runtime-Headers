/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSArray;

@interface MFAddressPickerReformatter : NSObject {

	NSArray* _addresses;
	NSArray* _reformattedAddresses;
	double _maximumWidth;
	double _minimumFontSize;
	double _maximumFontSize;
	double _fontSize;
	BOOL _attributesDisabled;

}
-(void)setFontSize:(double)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(void)setAddresses:(id)arg1 ;
-(void)_invalidateReformattedAddresses;
-(void)setMinimumFontSize:(double)arg1 maximumFontSize:(double)arg2 ;
-(void)_updateReformattedAddressesIfNecessary;
-(unsigned long long)_defaultOptions;
-(id)reformattedAddressAtIndex:(unsigned long long)arg1 ;
-(void)_determineFontSize:(BOOL*)arg1 ;
-(void)_truncateIdenticalLocalPartsWithDifferentDomainParts;
-(void)_attemptUniquingDisplayedStrings;
-(void)_truncateIdenticalLocalPartsWithDifferentDomainPartsWithTailLength:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)_attemptUniquingDisplayedStringsUsingBlock:(/*^block*/id)arg1 ;
-(void)_expandAllLocalParts;
-(id)_reformattedAddressesByDisplayedStrings;
-(BOOL)_reformattedAddressesByDisplayedStringsAreUnique:(id)arg1 ;
-(id)_saveMiddleTruncationRanges;
-(void)_restoreMiddleTruncationRanges:(id)arg1 ;
-(void)setAttributesDisabled:(BOOL)arg1 ;
-(unsigned long long)numberOfReformattedAddresses;
-(id)reformattedAddressStringAtIndex:(unsigned long long)arg1 ;
@end

