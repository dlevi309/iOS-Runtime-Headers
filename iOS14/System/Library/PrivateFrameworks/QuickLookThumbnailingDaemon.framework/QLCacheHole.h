/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
*/


#import <QuickLookThumbnailingDaemon/QuickLookThumbnailingDaemon-Structs.h>
@interface QLCacheHole : NSObject {

	unsigned long long _location;
	unsigned long long _length;

}

@property (assign,nonatomic) unsigned long long location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) unsigned long long length;                //@synthesize length=_length - In the implementation block
+(id)holeWithLocation:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(unsigned long long)location;
-(unsigned long long)length;
-(void)setLocation:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLocation:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLocation:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
@end

