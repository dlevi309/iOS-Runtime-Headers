/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class ODDPointPropertySet, OADShapeProperties, OADTextBody;

@interface ODDPoint : NSObject {

	int mType;
	ODDPointPropertySet* mPropertySet;
	OADShapeProperties* mShapeProperties;
	OADTextBody* mText;

}
+(void)addConnectionToPoint:(id)arg1 order:(unsigned long long)arg2 array:(id*)arg3 ;
-(id)init;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)propertySet;
-(id)shapeProperties;
@end

