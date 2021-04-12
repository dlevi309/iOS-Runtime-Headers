/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PPEventQuery.h>

@interface PPTripEventQuery : PPEventQuery {

	unsigned char _tripOptions;

}

@property (assign,nonatomic) unsigned char tripOptions;              //@synthesize tripOptions=_tripOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned char)tripOptions;
-(void)setTripOptions:(unsigned char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

