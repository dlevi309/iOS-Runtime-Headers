/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class OADDrawableCategoryDefaults;

@interface OADDrawableDefaults : NSObject {

	OADDrawableCategoryDefaults* mShapeDefaults;
	OADDrawableCategoryDefaults* mLineDefaults;
	OADDrawableCategoryDefaults* mTextDefaults;

}

@property (nonatomic,retain) OADDrawableCategoryDefaults * shapeDefaults; 
@property (nonatomic,retain) OADDrawableCategoryDefaults * lineDefaults; 
@property (nonatomic,retain) OADDrawableCategoryDefaults * textDefaults; 
-(id)description;
-(BOOL)isEmpty;
-(id)addShapeDefaults;
-(id)addLineDefaults;
-(id)addTextDefaults;
-(OADDrawableCategoryDefaults *)lineDefaults;
-(OADDrawableCategoryDefaults *)shapeDefaults;
-(OADDrawableCategoryDefaults *)textDefaults;
-(void)addDefaults;
-(void)setShapeDefaults:(OADDrawableCategoryDefaults *)arg1 ;
-(void)setLineDefaults:(OADDrawableCategoryDefaults *)arg1 ;
-(void)setTextDefaults:(OADDrawableCategoryDefaults *)arg1 ;
@end

