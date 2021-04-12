/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/


@class NSArray, NSDictionary, NSData;

@interface BCImageStore : NSObject {

	NSArray* _rawArray;
	NSDictionary* _dictionary;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * rawArray;                     //@synthesize rawArray=_rawArray - In the implementation block
@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(id)initWithArray:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)dictionary;
-(NSData *)data;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)initWithImages:(id)arg1 ;
-(void)setRawArray:(NSArray *)arg1 ;
-(id)generateImageDictionaryFromArray:(id)arg1 ;
-(id)stringPaddedForBase64:(id)arg1 ;
-(NSArray *)rawArray;
@end

