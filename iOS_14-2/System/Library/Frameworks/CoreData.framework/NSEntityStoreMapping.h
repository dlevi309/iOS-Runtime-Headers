/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSStoreMapping.h>

@class NSEntityDescription, NSDictionary, NSArray, NSString;

@interface NSEntityStoreMapping : NSStoreMapping {

	NSEntityDescription* _entity;
	NSDictionary* _propertyMappings;
	NSArray* _primaryKeys;
	BOOL _isSingleTableEntity;
	NSString* _subentityColumn;
	unsigned _subentityID;

}
-(id)initWithEntity:(id)arg1 ;
-(void)setEntity:(id)arg1 ;
-(id)createTableStatement;
-(id)entity;
-(void)setSubentityID:(unsigned)arg1 ;
-(id)propertyMappings;
-(unsigned)subentityID;
-(void)setSingleTableEntity:(BOOL)arg1 ;
-(id)description;
-(id)primaryKeys;
-(void)setPropertyMappings:(id)arg1 ;
-(BOOL)isSingleTableEntity;
-(void)setPrimaryKeys:(id)arg1 ;
-(id)subentityColumn;
-(void)setSubentityColumn:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

