/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponentScrollPosition.h>

@interface SXTextComponentScrollPosition : SXComponentScrollPosition {

	long long _characterIndex;
	double _relativeTextOffset;

}

@property (assign,nonatomic) long long characterIndex;               //@synthesize characterIndex=_characterIndex - In the implementation block
@property (assign,nonatomic) double relativeTextOffset;              //@synthesize relativeTextOffset=_relativeTextOffset - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)characterIndex;
-(double)relativeTextOffset;
-(void)setCharacterIndex:(long long)arg1 ;
-(void)setRelativeTextOffset:(double)arg1 ;
@end

