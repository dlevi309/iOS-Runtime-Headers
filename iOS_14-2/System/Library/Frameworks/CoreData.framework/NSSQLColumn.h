/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLProperty.h>

@class NSString;

@interface NSSQLColumn : NSSQLProperty {

	NSString* _columnName;

}
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)columnName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(BOOL)allowAliasing;
-(void)_setSQLType:(unsigned char)arg1 ;
-(id)initForReadOnlyFetching;
-(void)_setColumnName:(id)arg1 ;
-(unsigned char)sqlType;
-(void)_setSlotIfDefault:(unsigned)arg1 ;
-(unsigned)roughSizeEstimate;
-(id)description;
-(void)_setFetchIndex:(unsigned)arg1 ;
-(id)initWithColumnName:(id)arg1 sqlType:(unsigned char)arg2 ;
-(unsigned)fetchIndex;
-(id)cloneForReadOnlyFetching;
-(unsigned)slot;
-(void)setAllowAliasing:(BOOL)arg1 ;
-(void)dealloc;
@end

