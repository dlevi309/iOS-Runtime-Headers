/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)dimension;
-(id)valueAsString;
-(void)setMediaType:(NSString *)arg1 ;
-(NSString *)mediaType;
-(void)setDoubleValue:(double)arg1 ;
-(BOOL)evaluate;
-(void)setType:(long long)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)description;
-(NSString *)key;
-(long long)type;
-(void)setDimension:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)expressionAsString;
@end

