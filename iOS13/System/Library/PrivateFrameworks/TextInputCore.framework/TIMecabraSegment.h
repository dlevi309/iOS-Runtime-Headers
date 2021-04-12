/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSString;

@interface TIMecabraSegment : NSObject {

	NSString* _reading;
	NSString* _surface;

}

@property (nonatomic,retain) NSString * reading;              //@synthesize reading=_reading - In the implementation block
@property (nonatomic,retain) NSString * surface;              //@synthesize surface=_surface - In the implementation block
+(void)splitSegments:(id)arg1 at:(int)arg2 forPrefix:(id*)arg3 forSuffix:(id*)arg4 ;
-(NSString *)surface;
-(void)setReading:(NSString *)arg1 ;
-(NSString *)reading;
-(void)setSurface:(NSString *)arg1 ;
@end

