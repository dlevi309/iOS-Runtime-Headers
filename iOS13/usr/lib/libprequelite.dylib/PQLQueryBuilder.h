/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libprequelite.dylib
*/


@class NSMutableArray, NSError;

@interface PQLQueryBuilder : NSObject {

	NSMutableArray* _parameters;
	unsigned char _spec[1000];
	short _specLength;
	NSError* lastError;

}

@property (nonatomic,retain) NSError * lastError; 
-(id)init;
-(void)setLastError:(NSError *)arg1 ;
-(NSError *)lastError;
-(id)bindParameter:(id)arg1 spec:(unsigned char)arg2 ;
-(id)bindStringParameter:(id)arg1 ;
-(id)bindDoubleParameter:(double)arg1 ;
-(id)bindBooleanParameter:(BOOL)arg1 ;
-(id)bindCharParameter:(char)arg1 ;
-(id)bindUnsignedCharParameter:(unsigned char)arg1 ;
-(id)bindShortParameter:(short)arg1 ;
-(id)bindUnsignedShortParameter:(unsigned short)arg1 ;
-(id)bindIntegerParameter:(int)arg1 ;
-(id)bindUnsignedIntegerParameter:(unsigned)arg1 ;
-(id)bindLongParameter:(long long)arg1 ;
-(id)bindUnsignedLongParameter:(unsigned long long)arg1 ;
-(id)bindObjectParameter:(id)arg1 ;
@end

