/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

