/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/


@class NSArray;

@interface IAMModalBackground : NSObject {

	NSArray* _colors;
	NSArray* _locations;

}

@property (nonatomic,retain) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)background1;
+(id)background2;
+(id)background3;
-(void)setColors:(NSArray *)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(NSArray *)colors;
-(NSArray *)locations;
-(id)initWithColors:(id)arg1 atLocations:(id)arg2 ;
-(id)initWithStartingColor:(id)arg1 endingColor:(id)arg2 ;
@end

