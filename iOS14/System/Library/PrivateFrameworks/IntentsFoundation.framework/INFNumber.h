/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
*/

#import <IntentsFoundation/INFSentenceToken.h>

@class NSString, NSNumber;

@interface INFNumber : INFSentenceToken {

	NSString* _identifier;
	NSNumber* _value;

}

@property (nonatomic,copy) NSNumber * value;              //@synthesize value=_value - In the implementation block
+(id)numberWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setValue:(NSNumber *)arg1 ;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(NSNumber *)value;
-(id)stringForContext:(id)arg1 ;
-(id)contributingSentenceContext;
@end

