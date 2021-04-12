/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
*/


@class NSMutableDictionary;

@interface ACCNavigationRoadObjectRoadLaneInfo : NSObject {

	NSMutableDictionary* _infoDict;

}

@property (retain) NSMutableDictionary * infoDict;              //@synthesize infoDict=_infoDict - In the implementation block
+(id)keyForType:(unsigned short)arg1 ;
-(id)init;
-(id)description;
-(id)copyDictionary;
-(BOOL)_checkDataClassForType:(unsigned short)arg1 data:(id)arg2 ;
-(id)copyInfo:(unsigned short)arg1 ;
-(BOOL)setInfo:(unsigned short)arg1 data:(id)arg2 ;
-(NSMutableDictionary *)infoDict;
-(void)setInfoDict:(NSMutableDictionary *)arg1 ;
-(void)setInfoFromDictionary:(id)arg1 ;
@end

