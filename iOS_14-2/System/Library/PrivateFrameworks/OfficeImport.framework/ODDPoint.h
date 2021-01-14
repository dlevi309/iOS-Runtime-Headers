/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setText:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(id)text;
-(int)type;
-(id)shapeProperties;
-(id)propertySet;
@end

