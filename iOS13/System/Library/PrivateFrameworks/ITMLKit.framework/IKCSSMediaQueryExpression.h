/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSString;

@interface IKCSSMediaQueryExpression : NSObject {

	long long _type;
	NSString* _key;
	NSString* _stringValue;
	NSString* _dimension;
	NSString* _mediaType;
	double _doubleValue;

}

@property (assign) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSString * dimension;                //@synthesize dimension=_dimension - In the implementation block
@property (nonatomic,retain) NSString * mediaType;                //@synthesize mediaType=_mediaType - In the implementation block
@property (assign) double doubleValue;                            //@synthesize doubleValue=_doubleValue - In the implementation block
-(double)doubleValue;
-(id)description;
-(NSString *)key;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)stringValue;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)dimension;
-(NSString *)mediaType;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDoubleValue:(double)arg1 ;
-(void)setDimension:(NSString *)arg1 ;
-(void)setMediaType:(NSString *)arg1 ;
-(BOOL)evaluate;
-(id)valueAsString;
-(id)expressionAsString;
@end

