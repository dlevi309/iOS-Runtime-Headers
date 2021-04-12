/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@class NSString, NSData;

@interface AVMessageParser : NSObject {

	NSString* _lineSeparator;
	NSString* _headerBodySeparator;
	NSString* _bodyLengthKey;
	NSString* _compressionMethodKey;
	NSData* _lineSeparatorData;
	NSData* _headerBodySeparatorData;

}

@property (nonatomic,copy) NSString * lineSeparator;                        //@synthesize lineSeparator=_lineSeparator - In the implementation block
@property (nonatomic,copy) NSString * headerBodySeparator;                  //@synthesize headerBodySeparator=_headerBodySeparator - In the implementation block
@property (nonatomic,copy) NSString * bodyLengthKey;                        //@synthesize bodyLengthKey=_bodyLengthKey - In the implementation block
@property (nonatomic,copy) NSString * compressionMethodKey;                 //@synthesize compressionMethodKey=_compressionMethodKey - In the implementation block
@property (nonatomic,retain) NSData * lineSeparatorData;                    //@synthesize lineSeparatorData=_lineSeparatorData - In the implementation block
@property (nonatomic,retain) NSData * headerBodySeparatorData;              //@synthesize headerBodySeparatorData=_headerBodySeparatorData - In the implementation block
+(id)airMessageParser;
-(id)init;
-(NSString *)lineSeparator;
-(id)initWithLineSeparator:(id)arg1 headerBodySeparator:(id)arg2 bodyLengthKey:(id)arg3 compressionMethodKey:(id)arg4 ;
-(void)setLineSeparator:(NSString *)arg1 ;
-(void)setHeaderBodySeparator:(NSString *)arg1 ;
-(id)partsWithData:(id)arg1 ;
-(NSString *)headerBodySeparator;
-(NSString *)bodyLengthKey;
-(void)setBodyLengthKey:(NSString *)arg1 ;
-(NSString *)compressionMethodKey;
-(void)setCompressionMethodKey:(NSString *)arg1 ;
-(NSData *)lineSeparatorData;
-(void)setLineSeparatorData:(NSData *)arg1 ;
-(NSData *)headerBodySeparatorData;
-(void)setHeaderBodySeparatorData:(NSData *)arg1 ;
@end

