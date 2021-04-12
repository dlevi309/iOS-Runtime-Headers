/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLProperty.h>

@class NSString;

@interface NSSQLColumn : NSSQLProperty {

	NSString* _columnName;

}
-(void)dealloc;
-(id)description;
-(id)columnName;
-(unsigned char)sqlType;
-(unsigned)slot;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setSQLType:(unsigned char)arg1 ;
-(id)initForReadOnlyFetching;
-(void)setAllowAliasing:(BOOL)arg1 ;
-(void)_setColumnName:(id)arg1 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(BOOL)allowAliasing;
-(id)initWithColumnName:(id)arg1 sqlType:(unsigned char)arg2 ;
-(unsigned)roughSizeEstimate;
-(unsigned)fetchIndex;
-(void)_setFetchIndex:(unsigned)arg1 ;
-(void)_setSlotIfDefault:(unsigned)arg1 ;
-(id)cloneForReadOnlyFetching;
@end

