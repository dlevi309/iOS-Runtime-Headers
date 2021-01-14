/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/DCMapsURLGenerator.h>

@class NSString;

@interface DCCityMapperURLGenerator : DCMapsURLGenerator {

	NSString* _startCoordinate;
	NSString* _endCoordinate;

}

@property (nonatomic,retain) NSString * startCoordinate;              //@synthesize startCoordinate=_startCoordinate - In the implementation block
@property (nonatomic,retain) NSString * endCoordinate;                //@synthesize endCoordinate=_endCoordinate - In the implementation block
+(void)generateURLWithMapsLink:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)scheme;
-(id)host;
-(id)path;
-(void)setStartCoordinate:(NSString *)arg1 ;
-(void)setEndCoordinate:(NSString *)arg1 ;
-(NSString *)endCoordinate;
-(NSString *)startCoordinate;
-(void)populateQueryDictionary;
@end

