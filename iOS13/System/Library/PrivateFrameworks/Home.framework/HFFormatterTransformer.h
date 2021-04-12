/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSFormatter;

@interface HFFormatterTransformer : NSFormatter {

	NSFormatter* _sourceFormatter;
	/*^block*/id _transformBlock;

}

@property (nonatomic,copy) NSFormatter * sourceFormatter;              //@synthesize sourceFormatter=_sourceFormatter - In the implementation block
@property (nonatomic,copy) id transformBlock;                          //@synthesize transformBlock=_transformBlock - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setSourceFormatter:(NSFormatter *)arg1 ;
-(void)setTransformBlock:(id)arg1 ;
-(id)initWithSourceFormatter:(id)arg1 transformBlock:(/*^block*/id)arg2 ;
-(NSFormatter *)sourceFormatter;
-(id)transformBlock;
@end

