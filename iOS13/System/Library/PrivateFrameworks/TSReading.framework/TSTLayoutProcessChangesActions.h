/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@interface TSTLayoutProcessChangesActions : NSObject {

	BOOL mLayoutInvalidate;
	BOOL mLayoutInvalidateProvider;
	BOOL mLayoutInvalidateSize;
	BOOL mLayoutInvalidateTableNameVisibility;
	BOOL mLayoutSpacesInvalidateCoordinates;
	BOOL mLayoutSpacesInvalidateTableOffsets;

}

@property (assign,nonatomic) BOOL layoutInvalidate; 
@property (assign,nonatomic) BOOL layoutInvalidateProvider; 
@property (assign,nonatomic) BOOL layoutInvalidateSize; 
@property (assign,nonatomic) BOOL layoutInvalidateTableNameVisibility; 
@property (assign,nonatomic) BOOL layoutSpacesInvalidateCoordinates; 
@property (assign,nonatomic) BOOL layoutSpacesInvalidateTableOffsets; 
-(BOOL)layoutInvalidate;
-(void)setLayoutInvalidate:(BOOL)arg1 ;
-(BOOL)layoutInvalidateProvider;
-(void)setLayoutInvalidateProvider:(BOOL)arg1 ;
-(BOOL)layoutInvalidateSize;
-(void)setLayoutInvalidateSize:(BOOL)arg1 ;
-(BOOL)layoutInvalidateTableNameVisibility;
-(void)setLayoutInvalidateTableNameVisibility:(BOOL)arg1 ;
-(BOOL)layoutSpacesInvalidateCoordinates;
-(void)setLayoutSpacesInvalidateCoordinates:(BOOL)arg1 ;
-(BOOL)layoutSpacesInvalidateTableOffsets;
-(void)setLayoutSpacesInvalidateTableOffsets:(BOOL)arg1 ;
@end

