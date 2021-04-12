/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FPPair : NSObject <NSCopying> {

	id _first;
	id _second;

}

@property (nonatomic,retain) id first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,retain) id second;              //@synthesize second=_second - In the implementation block
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecond:(id)arg1 ;
-(id)second;
-(id)first;
-(void)setFirst:(id)arg1 ;
-(BOOL)isEqualToPair:(id)arg1 ;
@end

