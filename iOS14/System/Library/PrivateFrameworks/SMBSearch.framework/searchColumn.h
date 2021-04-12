/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
*/


@class rowVariant;

@interface searchColumn : NSObject {

	int _propNumber;
	rowVariant* _propValue;

}

@property (assign) int propNumber;                      //@synthesize propNumber=_propNumber - In the implementation block
@property (retain) rowVariant * propValue;              //@synthesize propValue=_propValue - In the implementation block
-(int)propNumber;
-(id)initWithPropertyNumber:(int)arg1 RVariant:(id)arg2 ;
-(void)setPropNumber:(int)arg1 ;
-(rowVariant *)propValue;
-(void)setPropValue:(rowVariant *)arg1 ;
@end

