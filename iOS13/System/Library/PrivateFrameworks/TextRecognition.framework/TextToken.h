/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSString, NSArray;

@interface TextToken : NSObject {

	int _wordID;
	NSString* _string;
	double _score;
	NSArray* _features;
	unsigned long long _properties;

}

@property (readonly) NSString * string;                                    //@synthesize string=_string - In the implementation block
@property (readonly) double score;                                         //@synthesize score=_score - In the implementation block
@property (readonly) NSArray * features;                                   //@synthesize features=_features - In the implementation block
@property (readonly) int wordID;                                           //@synthesize wordID=_wordID - In the implementation block
@property (nonatomic,readonly) unsigned long long properties;              //@synthesize properties=_properties - In the implementation block
-(NSString *)string;
-(double)score;
-(unsigned long long)properties;
-(NSArray *)features;
-(int)wordID;
-(id)initWithString:(id)arg1 score:(double)arg2 features:(id)arg3 wordID:(int)arg4 properties:(unsigned long long)arg5 ;
@end

