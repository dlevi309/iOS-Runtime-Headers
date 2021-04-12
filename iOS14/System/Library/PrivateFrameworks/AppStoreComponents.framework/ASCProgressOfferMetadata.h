/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/ASCOfferMetadata.h>

@interface ASCProgressOfferMetadata : ASCOfferMetadata {

	BOOL _indeterminate;
	double _percent;

}

@property (nonatomic,readonly) double percent;                                       //@synthesize percent=_percent - In the implementation block
@property (assign,getter=isIndeterminate,nonatomic) BOOL indeterminate;              //@synthesize indeterminate=_indeterminate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIndeterminate:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(double)percent;
-(BOOL)isIndeterminate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initIndeterminate;
-(id)initWithPercent:(double)arg1 ;
-(BOOL)isProgress;
@end

