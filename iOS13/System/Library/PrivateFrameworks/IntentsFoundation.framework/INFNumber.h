/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)identifier;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)stringForContext:(id)arg1 ;
-(id)contributingSentenceContext;
@end

