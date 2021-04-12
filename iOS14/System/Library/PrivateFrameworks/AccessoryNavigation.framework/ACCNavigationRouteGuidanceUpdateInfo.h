/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
*/


@class NSMutableDictionary;

@interface ACCNavigationRouteGuidanceUpdateInfo : NSObject {

	NSMutableDictionary* _infoDict;

}

@property (retain) NSMutableDictionary * infoDict;              //@synthesize infoDict=_infoDict - In the implementation block
+(id)keyForType:(unsigned short)arg1 ;
-(id)init;
-(id)copyDictionary;
-(BOOL)setInfo:(unsigned short)arg1 data:(id)arg2 ;
-(BOOL)_checkDataClassForType:(unsigned short)arg1 data:(id)arg2 ;
-(id)copyInfo:(unsigned short)arg1 ;
-(NSMutableDictionary *)infoDict;
-(void)setInfoDict:(NSMutableDictionary *)arg1 ;
@end

