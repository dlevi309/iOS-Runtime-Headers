/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSDictionary *)dictionary;
-(NSData *)data;
-(id)initWithImages:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(void)setRawArray:(NSArray *)arg1 ;
-(id)generateImageDictionaryFromArray:(id)arg1 ;
-(id)stringPaddedForBase64:(id)arg1 ;
-(NSArray *)rawArray;
@end

