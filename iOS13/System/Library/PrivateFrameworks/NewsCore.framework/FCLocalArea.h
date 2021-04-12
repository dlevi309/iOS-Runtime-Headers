/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSArray, NSString;

@interface FCLocalArea : NSObject {

	NSArray* _regionIds;
	NSString* _identifier;
	NSArray* _bbox;

}

@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * bbox;                     //@synthesize bbox=_bbox - In the implementation block
@property (nonatomic,retain) NSArray * regionIds;                //@synthesize regionIds=_regionIds - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)containsLocation:(id)arg1 ;
-(NSArray *)regionIds;
-(NSArray *)bbox;
-(BOOL)isValue:(double)arg1 betweenValue:(double)arg2 andValue:(double)arg3 ;
-(void)setRegionIds:(NSArray *)arg1 ;
-(void)setBbox:(NSArray *)arg1 ;
@end

