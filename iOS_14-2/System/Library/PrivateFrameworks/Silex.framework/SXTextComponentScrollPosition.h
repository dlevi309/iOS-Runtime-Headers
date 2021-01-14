/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponentScrollPosition.h>

@interface SXTextComponentScrollPosition : SXComponentScrollPosition {

	long long _characterIndex;
	double _relativeTextOffset;

}

@property (nonatomic,readonly) long long characterIndex;               //@synthesize characterIndex=_characterIndex - In the implementation block
@property (nonatomic,readonly) double relativeTextOffset;              //@synthesize relativeTextOffset=_relativeTextOffset - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)characterIndex;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithComponentIdentifier:(id)arg1 canvasWidth:(double)arg2 relativePageOffset:(double)arg3 characterIndex:(long long)arg4 relativeTextOffset:(double)arg5 ;
-(double)relativeTextOffset;
-(id)initWithDictionaryRepresentation:(id)arg1 exactly:(BOOL)arg2 ;
-(BOOL)jsonDictionaryRepresentationIsValid:(id)arg1 exactly:(BOOL)arg2 ;
@end

